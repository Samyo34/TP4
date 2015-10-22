# TP4

Sauvegarde

Pour sauvegarder les map en cours, j'ai créé dans les classes Camera et TriangleWindow une méthode toSave() retournant une QString.
La méthode toSave() de Camera récupère les informations (en rotation automatique ou pas, l'etat d'affichage, la rotation sur l'axe des X, la rotation sur l'axe des Y, et le scale) pour les écrire dans une String.
La méthode toSave() de TriangleWindow fait appel à la méthode toSave() de son attribut Camera et ajoute à la String retournée le nombre de jours et le nombre de mois.
Les informations sont séparé par des ";".
La class FileManager a comme attribut un QVector de TriangleWindow, une méthode pour ajouter des TriangleWindow (appelée dans le main à chaque création de TriangleWindow) et une méthode save() qui fait appel aux méthodes toSave() des TriangleWindow contenu dans le QVector.
La méthode save() écrit dans un fichier les différentes String récupéré des TriangleWindow en les séparant par un "|".
FileManager est un singleton, lorsque dans une TriangleWindow la touche F6 est pressé, la méthode save du FileManager est appelé et toutes les informations sont écrite dans le fichier.

Chargement
La class FileManager possède également une méthode load() qui récupère le contenu du fichier de sauvegarde et fait appel aux fonctions load() des TriangleWindow en passant en paramètre les informations necessaire.
Ces informations sont récupèré en splitant la String contenue dans le fichier par "|" et ";".
La fonction load() de TriangleWindow modifie les attributs avec les "nouvelles" données.
