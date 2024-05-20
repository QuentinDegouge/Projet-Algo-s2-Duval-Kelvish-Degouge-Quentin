#include "column.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,o,k;
    char name;
    COLUMN *Cdataframe = NULL;
    COLUMN *col = create_column("Colonne1");
    COLUMN *col2 = create_column("Colonne2");
    insert_value(col, 52);
    insert_value(col, 52);
    insert_value(col, 15);
    insert_value(col2, 12);
    print_col(col);
    printf("Le chiffre %d se repete %d fois.\n",52, nb_occurences(col, 52));
    printf("A la position %d se trouve la valeur %d.\n",2,value_pos(col, 2));
    printf("Il y a %d valeur(s) superieure(s) a %d.\n",val_sup(col,16),16);
    printf("Il y a %d valeur(s) inferieure(s) a %d.\n",val_inf(col,16),16);
    printf("Il y a %d valeur(s) egale(s) a %d.\n",val_egal(col,15),15);
    printf("De quelle taille est le Cdataframe ?\n");
    scanf("%d",&i);
    Cdataframe = (COLUMN *)malloc(i *sizeof(COLUMN));
    for (int n = 0; n < i; n++){
        printf("Nom de la colonne %d\n",n);
        scanf("%s",&name);
        Cdataframe[n] = *create_column(&name);
        printf("Combien de valeurs ?\n");
        scanf("%d",&o);
        for (int m = 0; m < o; m++){
            printf("Quelle valeur dans la case %d ? \n",m);
            scanf("%d",&k);
            insert_value(&Cdataframe[n],k);
        }
    }
    Cdataframe = (COLUMN *)realloc(Cdataframe,sizeof(COLUMN)*2);
    Cdataframe[i] = *col;
    Cdataframe[i+1] = *col2;
    i ++;
    for (int n = 0; n < i+1; n++)
        print_col(&Cdataframe[n]);
    printf("Jusqu'a quelle ligne voulez vous affichez les nombres ?\n");
    scanf("%d",&o);
    for (int n = 0; n < i; n++)
        print_liml(&Cdataframe[n],o);
    printf("Jusqu'a quelle colonne voulez vous affichez les nombres ?\n");
    scanf("%d",&o);
    for (int n = 0; n < o; n++)
        print_col(&Cdataframe[n]);
    for (int n = 0; n < i ; n++){
        printf("Quel nombre vous voulez vous ajoutez a la colonne %d\n",n);
        scanf("%d",&o);
        add_line(&Cdataframe[n],o);
    }
    for (int n = 0; n < i; n++)
        print_col(&Cdataframe[n]);
    delete_column(&Cdataframe);
    return 0;
}
