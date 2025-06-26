# Remote VR – Contrôle de casques VR via WebSocket

Ce projet permet de contrôler à distance des casques VR connectés à un serveur Node.js via une interface web ergonomique, compatible tablette/mobile, avec gestion dynamique des casques, commandes Play/Stop.

## Fonctionnalités principales
- Interface web responsive (mobile/tablette/desktop) pour piloter les casques VR.
- Affichage dynamique des casques connectés/déconnectés.
- Commandes Play (appui long 300ms) et Stop (appui long 2s) pour chaque casque.
- Sélection d’un film via des radio.
- Mode debug activable par 5 clics rapides sur le titre.

## Prérequis
- Node.js (v14 ou supérieur recommandé)

## Installation
1. Clonez ou téléchargez ce dépôt sur votre machine. (Le serveur peut tourner sur un raspberry pi 3 ou +)
2. Placez-vous dans le dossier du projet :
   ```bash
   cd VR_Remote
   ```
3. Installez les dépendances :
   ```bash
   npm install
   ```

## Lancement du serveur
1. Démarrez le serveur Node.js (Express + WebSocket) :
   ```bash
   node server.js
   ```
   - Le serveur Express sert les fichiers statiques sur le port 8080 (http://<ip>:8080)
   - Le serveur WebSocket écoute sur le port 3000

## Utilisation de l’interface web
1. Depuis un navigateur (PC, tablette ou mobile connecté au même réseau), ouvrez l’URL suivante :
   ```
   http://<ip_du_serveur>:8080/remote_vr.html
   ```
2. L’interface affiche dynamiquement les casques connectés.
3. Pour chaque casque :
   - Sélectionnez un film avec les radio boutons.
   - Maintenez le bouton Play pendant 300ms pour envoyer la commande Play.
   - Maintenez le bouton Stop pendant 2s pour envoyer la commande Stop (avec barre de progression).
4. Les casques se connectent/déconnectent dynamiquement.
5. (Optionnel) Activez le mode debug en cliquant 5 fois rapidement sur le titre.

## Architecture
- `server.js` : serveur Node.js (Express + WebSocket), gestion des rôles (remote_vr/headset), routage des commandes, gestion dynamique des casques.
- `public/remote_vr.html` : interface web principale
- `package.json` : dépendances Node.js.

## Notes
- L’interface détecte automatiquement l’IP du serveur pour la connexion WebSocket.
- Le système est conçu pour être utilisé sur un réseau local (LAN).
- Les casques VR sont identifiés avec le dernier octet de leur adresse IP.

## Dépannage
- Si l’interface ne détecte pas les casques, vérifiez que le serveur Node.js est bien lancé et que les ports 8080/3000 sont accessibles.
- Pour tout problème, activez le mode debug pour afficher les logs de connexion WebSocket.

## Amélioration possible 
- Utiliser un fichier de config à coté du build pour redefinir l'adresse ip du serveur sans avoir à rebuild.
- Utiliser ce même fichier de config pour définir l'id du casque, au lieu d'utiliser et de configurer les adresses ip static

---

## Integration Unreal
1. Prerequis : le plugin "WebSocket Client for Unreal Engine" https://www.fab.com/fr/listings/028b81de-6110-4a3f-90e9-eda0db1013b8
    - Il est contenu dans le dossier Plugins du projet. Mais une recompilation de celui-ci sera surement necessaire pour une autre version qu'UE 5.5
2. Le système fonctionne dans le Game Instance "GI_Remote_VR", attribuer ce GI dans les projects settings.
3. Mettre à jour l'adresse ip du serveur dans la variable "IP_Server" du "GI_Remote_VR"
4. Tester. Sur l'interface web, l'option 1 lance la scène LVL_Movie_1 ... 
5. Modifier le format de la string de "open level" ou adapter le nom des levels.

## Configuration Réseau
1. Utiliser un routeur wifi dédier pour l'installation
2. Configurer l'adresse réseau du routeur sur 3 octets (255.255.255.0), ex : 192.168.1.0
3. Configurer manuellement les adresse ip static des casques de X.X.X.1 à X.X.X.15
4. Configurer l'adresse ip static du serveur en accord avec l'adresse écrite dans le GI_Remote_VR, (ici 192.168.1.111)

## Configuration materiel recommendée
- routeur wifi
- raspberry pi 3(ou +) / mini pc -> branché en ethernet au routeur
- tablette ou telephone récent d'entré de gamme (android ou apple peut importe) avec un navigateur (firefox, safari ou chrome).

**Auteur :** Martin Cailleau
