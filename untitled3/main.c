#include <stdio.h>
#include "fonctions.h"

int main()
{
    /* Création de 2 colonnes */
    COL* colonne1 = addcollone("Colonne1");
    COL* colonne2 = addcollone("Colonne2");

    /* Rajoute des valeurs dans les colonnes */
    for (int i = 0; i < 7; i++)
    {
        replace(colonne1, i);
        replace(colonne2, i+2);
    }
    replace(colonne1, 3);
    replace(colonne1, 5);
    replace(colonne1, 3);

    /* Affiche les colonnes */
    printf("Colonne 1:\n");
    printcollone(colonne1);
    printf("\nColonne 2:\n");
    printcollone(colonne2);

    /* Test de la fonction nb_docc pour compter le nombre d'occurences de val dans la colonne 1 */
    int valeur = 3;
    printf("\nNombre d'occurences de %d dans la colonne 1: %d\n", valeur, nb_occurence(colonne1, valeur));

    /* Test de la fonction position_of_value pour trouver val à une position dans la colonne 2 */
    int position = 2;
    printf("\nValeur à la position %d dans la colonne 2: %d\n", position, position(colonne2, position));

    /* Test les fonctions de comptage */
    int valeur_test = 4;
    printf("\nNombre de valeurs supérieures a %d dans la colonne 1: %d\n", valeur_test, supérieur(colonne1, valeur_test));
    printf("Nombre de valeurs inférieures a %d dans la colonne 2: %d\n", valeur_test, inférieur(colonne2, valeur_test));
    printf("Nombre de valeurs egales a %d dans la colonne 1: %d\n", valeur_test, égal(colonne1, valeur_test));

    /* Suppression des colonnes pour libérer la mémoire */
    delcollone(&colonne1);
    delcollone(&colonne2);

    return 0;
