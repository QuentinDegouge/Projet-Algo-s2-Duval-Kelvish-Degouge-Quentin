#include "column.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i,o,k,verif = 0,pres,x;
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
    i++;
    Cdataframe[i] = *col2;
    i ++;
    for (int n = 0; n < i; n++)
        print_col(&Cdataframe[n]);

    printf("Jusqu'a quelle colonne voulez vous affichez les nombres ?\n");
    scanf("%d",&k);
    for (int n = 0; n < k; n++)
        print_col(&Cdataframe[n]);
    for (int n = 0; n < i ; n++){
        printf("Quel nombre vous voulez vous ajoutez a la colonne %d\n",n);
        scanf("%d",&k);
        add_line(&Cdataframe[n],k);
    }
    for (int n = 0; n < i; n++) {
        delete_line(&Cdataframe[n]);
    }
    // Création d'une colonne
    printf("Quel est le nom de la nouvelle colonne ?\n");
    scanf("%s",&name);
    Cdataframe[i] = *create_column(&name);
    i++;

    printf("Quelle colonne voulez vous renommez ?\n");
    scanf("%d",&k);
    printf("Quel sera son nouveau nom ?\n");
    scanf("%s",&name);
    strcpy(Cdataframe[k].titre, &name);
    printf("De quelle valeur souhaitez vous connaitre la presence ?\n");
    scanf("%d",&o);
    k = 0;
    printf("Bjr");
    while (verif != 1 || k < i){
        verif = verif_val(&Cdataframe[k],o);
        k++;
    }
    if (verif == 1)
        printf("La valeur %d est presente dans le tableau.\n",o);
    else
        printf("La valeur %d n'est pas presente dans le tableau.\n",o);
    printf("Quelle est la ligne et la colonne du chiffre dont vous voulez connaître la valeur ?\n");
    scanf("%d %d",&o,&k);
    printf("Il s'agit de %d.\nSouhaitez vous le modifiez ? Si oui tapez 1 sinon 0.\n",Cdataframe[o].tableau[k]);
    scanf("%d",&pres);
    if (pres) {
        printf("Par quelle valeur souhaitez vous le modifiez ?\n");
        scanf("%d",&x);
        Cdataframe[o].tableau[k] = x;
    }
    for (int n = 0; n < i; n++)
        printf("%s ",Cdataframe[n].titre);
    k = 0;
    while (&Cdataframe[k] != NULL){
        k++;
    }
    o = 0;
    printf("Il y a %d colonnes.\n",k);
    for (int n = 0; n < i; n++){
        o += Cdataframe[n].tl;
    }
    printf("Il y a %d lignes.\n",o);
    x = 0;
    for (int n = 0; n < i; n++){
        x += nb_occurences(&Cdataframe[n],1);
    }
    printf("Il y a %d fois le nombre 1",x);
    x = 0;
    for (int n = 0; n < i; n++){
        x += val_inf(&Cdataframe[n],20);
    }
    printf("Il y a %d valeur(s) inferieure a 20",x);
    x = 0;
    for (int n = 0; n < i; n++){
        x += val_sup(&Cdataframe[n],20);
    }
    printf("Il y a %d valeur(s) superieure a 20",x);
    printf("Jusqu'a quelle ligne voulez vous affichez les nombres ?\n");
    scanf("%d",k);
    for (int n = 0; n < i; n++)
        print_liml(&Cdataframe[n],k);
    return 0;
}
