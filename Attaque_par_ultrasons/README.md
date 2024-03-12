# Attaque par ultrasons

Ce dossier contient les étapes effectuées dans le cadre de l'attaque par ultrasons.

## Étapes de l'attaque

On télécharge la version windows de GnuPG 1.4.13 :

	https://www.gnupg.org/ftp/gcrypt/binary/

Dans un second temps on va créer un fichier volumineux que nous encrypterons ensuite avec GnuPG

	fsutil file createnew fichier_a_encrypter.txt 2147483648

Puis on génére une paire clés du type RSA et RSA de longueur 4096 bits avec comme passe phrase "per"

	gpg --gen-key

![image](https://github.com/antoine-le-calloch/PER_2024/assets/71392407/a7a4d1b8-22e8-4358-b23f-ed51f611da5f)

On va maintenant pouvoir chiffrer le fichier créé précédemment avec notre clé

	gpg --encrypt --recipient "Antoine Le Calloch" --output fichier_encrypter.asc --armor fichier_a_encrypter.txt

  Puis le dechiffrer
  
  	gpg --decrypt --output fichier_decrypter.txt fichier_encrypter.asc
