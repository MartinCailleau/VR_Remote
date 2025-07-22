#!/bin/bash
# Script de démarrage automatique du serveur Remote VR avec redémarrage en cas de crash
cd "$(dirname "$0")"
while true; do
    echo "[Remote VR] Démarrage du serveur..."
    node server.js
    echo "[Remote VR] Le serveur s'est arrêté. Redémarrage dans 2 secondes..."
    sleep 2
done
