#include <stdio.h>
#include "fonctions.h"

int main()
{
    /* Création de 2 colonnes */
    COL* colonne1 = create_col("Colonne1");
    COL* colonne2 = create_col("Colonne2");

    /* Rajoute des valeurs dans les colonnes */
    for (int i = 0; i < 7; i++)
    {
        insert_val(colonne1, i);
        insert_val(colonne2, i+2);
    }
    insert_val(colonne1, 3);
    insert_val(colonne1, 5);
    insert_val(colonne1, 3);

    /* Affiche les colonnes */
    printf("Colonne 1:\n");
    print_col(colonne1);
    printf("\nColonne 2:\n");
    print_col(colonne2);

    /* Test de la fonction nb_docc pour compter le nombre d'occurences de val dans la colonne 1 */
    int valeur = 3;
    printf("\nNombre d'occurences de %d dans la colonne 1: %d\n", valeur, nb_docc(colonne1, valeur));

    /* Test de la fonction position_of_value pour trouver val à une position dans la colonne 2 */
    int position = 2;
    printf("\nValeur à la position %d dans la colonne 2: %d\n", position, position_of_value(colonne2, position));

    /* Test les fonctions de comptage */
    int valeur_test = 4;
    printf("\nNombre de valeurs supérieures a %d dans la colonne 1: %d\n", valeur_test, values_greater(colonne1, valeur_test));
    printf("Nombre de valeurs inférieures a %d dans la colonne 2: %d\n", valeur_test, values_less(colonne2, valeur_test));
    printf("Nombre de valeurs egales a %d dans la colonne 1: %d\n", valeur_test, values_equal(colonne1, valeur_test));

    /* Suppression des colonnes pour libérer la mémoire */
    delete_col(&colonne1);
    delete_col(&colonne2);

    return 0;
