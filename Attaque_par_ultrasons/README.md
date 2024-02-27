# Attaque par ultrasons

Ce dossier contient les étapes effectuées dans le cadre de l'attaque par ultrasons.

## Étapes de l'attaque

On télécharge la version windows de GnuPG 1.4.13 :

	https://www.gnupg.org/ftp/gcrypt/binary/

Dans un second temps on va créer un fichier volumineux que nous encrypterons ensuite avec GnuPG

	fsutil file createnew fichier_a_encrypter.txt 2147483648
