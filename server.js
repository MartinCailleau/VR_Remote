const express = require('express');
const app = express();
const PORT = 8080;
const WS_PORT = 3000;
const path = require('path');

const http = require('http');
const wsServer = http.createServer();
const { Server } = require('ws');
const wss = new Server({ server: wsServer });

app.use(express.static(path.join(__dirname, 'public')));

wss.on('connection', (ws, req) => {
    let ip = req.socket.remoteAddress;
    if (ip && ip.startsWith('::ffff:')) ip = ip.replace('::ffff:', '');
    ws.clientIp = ip;
    ws.role = 'unknown';
    ws.headsetId = null;

    ws.on('message', (message) => {
        const msgStr = message.toString();
        let data;
        try { data = JSON.parse(msgStr); } catch {}
        // Identification
        if (data && data.type === 'identify') {
            if (data.role === 'remote_vr') {
                ws.role = 'remote_vr';
                console.log('Client identifié comme remote_vr');
                return;
            }
            if (data.role === 'headset') {
                ws.role = 'headset';
                ws.headsetId = ws.clientIp.split('.').pop();
                console.log(`Client casque vr ${ws.clientIp} (id: ${ws.headsetId})`);
                // Notifier uniquement les remote_vr
                const msg = JSON.stringify({ type: 'identify', role: 'headset', id: ws.headsetId });
                wss.clients.forEach(client => {
                    if (client.role === 'remote_vr' && client.readyState === ws.OPEN) client.send(msg);
                });
                return;
            }
        }
        // Répondre à la demande de liste des casques
        if (data && data.type === 'get_headsets') {
            // On ne prend que les connexions actives
            const ids = Array.from(wss.clients)
                .filter(client => client.role === 'headset' && client.headsetId && client.readyState === ws.OPEN)
                .map(client => client.headsetId);
            ws.send(JSON.stringify({ type: 'headset_list', ids }));
            return;
        }
        // Routage des commandes headset_X_play_Y
        const match = msgStr.match(/^headset_(\d+)_play_(\d+)$/);
        if (match) {
            const headsetId = match[1];
            wss.clients.forEach(client => {
                if (client.role === 'headset' && client.headsetId === headsetId && client.readyState === ws.OPEN) {
                    console.log(`Commande envoyée à casque ${client.headsetId}: ${msgStr}`);
                    client.send(msgStr);
                }
            });
        }
    });
    ws.on('close', () => {
        if (ws.role === 'headset' && ws.headsetId) {
            // Notifier les remote_vr de la déconnexion
            const msg = JSON.stringify({ type: 'headset_disconnect', id: ws.headsetId });
            wss.clients.forEach(client => {
                if (client.role === 'remote_vr' && client.readyState === ws.OPEN) client.send(msg);
            });
        }
        // La suppression du casque de la liste est automatique car la connexion WebSocket est fermée
        console.log('Client WebSocket déconnecté');
    });
});

app.get('/', (req, res) => {
    res.send('Serveur Express opérationnel !');
});

app.listen(PORT, () => {
    console.log(`Serveur Express démarré sur http://localhost:${PORT}`);
});

wsServer.listen(WS_PORT, () => {
    console.log(`Serveur WebSocket démarré sur ws://localhost:${WS_PORT}`);
});
