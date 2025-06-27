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
- routeur wifi (ex: https://www.amazon.fr/TP-Link-AC1200-Dual-Band-Wi-FI-Router/dp/B08GDC3534/ref=asc_df_B08GDC3534?mcid=a10023669ef23b2f9639039344b91996&tag=googshopfr-21&linkCode=df0&hvadid=701511851417&hvpos=&hvnetw=g&hvrand=3634894713275192370&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9220036&hvtargid=pla-1162811143410&hvocijid=3634894713275192370-B08GDC3534-&hvexpln=0&th=1)
- raspberry pi 3(ou +) / mini pc -> branché en ethernet au routeur (ex : https://www.amazon.fr/Raspberry-d%C3%A9marrage-dalimentation-Bo%C3%AEtier-Carte/dp/B0D3S3HGXD/ref=sr_1_5?adgrpid=56878558740&dib=eyJ2IjoiMSJ9.kT6YfutOjwKMh4swpKAvfe4MWTcL9Qn2eVBMNza9rnkkHsIwn_L6KkOL4KvcZqnLCqQITvxXRSpyJFGflmVUWNiP6jIzP82TP8ACywy1RAGg1rHOnEvAzy3jXW2W730tNAGXdR4PjU8InwnUdf9KqaP-DIx4DiCLMshvRFV2LaP_uzBFOilIfCb9LbQw3ZpLAXdPM2dhCRnh7yWnW8w3pJbicRySSX9wJJz2dFALZj5fCP1kgfr2Nry96uBYzRVCJuRDDHq8Vjhm2rw4-hEDM1bAdu0FUajHK2_1IGTo2rk.wz_3N-xCuUg_k6ApEeR1MUlwMYuIOkArC1F_FMx7k_g&dib_tag=se&hvadid=601473472443&hvdev=c&hvexpln=0&hvlocphy=9220036&hvnetw=g&hvocijid=14398487907867756438--&hvqmt=e&hvrand=14398487907867756438&hvtargid=kwd-51717808668&hydadcr=7972_2270202&keywords=raspberry+pi+3&mcid=3e4f832a6a9a3308bab91753bd505040&qid=1751040253&sr=8-5)
- tablette ou telephone récent d'entré de gamme (android ou apple peut importe) avec un navigateur (firefox, safari ou chrome). (ex : https://www.amazon.fr/Lenovo-TB-8505F-MediaTek-Quad-Core-Reconditionn%C3%A9/dp/B0DXKVJFDR/ref=sr_1_12?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=17AJQ1304ASOM&dib=eyJ2IjoiMSJ9.suy8ZfrO3GBgnjYecRmkS03cOvQFR9uSUuZzBWGAnYRfV1cULP7eqr_DLB9t3EOHHv-gzCLhbj_NrCpShtF9Mfv3Qq500ri__pqwV5p7-G1FW3qM6TV_7Dzx84rKXh3mD4X_95YA2wFFOwCBUK4LOvonS4s5BuHJBXlt2xaBBTzPZPpWEH90dH332FMJ5VKGuK4vNHGtwcOAECsOmvT9_R3PqDnj7ZMM9Dexn5QlD1kVvSsRHcWFxHefSr0OZCmDyWl_yMylTM0Uxvhd6xi92-MWDAiWXi7I6X0oiW2470g.tqAgF5Ussdv-1s94O8q-DTqcp2bQYrE9kNCSP2yqN2E&dib_tag=se&keywords=tablette+android+8&qid=1751039981&sprefix=tablette+android+8%2Caps%2C90&sr=8-12)
**Auteur :** Martin Cailleau
