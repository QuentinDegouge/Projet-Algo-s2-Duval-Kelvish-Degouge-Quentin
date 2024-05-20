#include "column.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

COLUMN *create_column(char *title){
    COLUMN *col = (COLUMN *)malloc(sizeof (COLUMN));
    strcpy(col->titre, title);
    col->tableau = NULL;
    col->tl = 0;
    col->tp = 0;
    return col;
}

int insert_value(COLUMN *col, int value){
    if (col->tableau == NULL){
        col->tableau = (int *)malloc(sizeof(int)*256);
        col->tp = 256;
        if (col->tableau == NULL)
            return 0;
    }
    else {
        if (col->tp == col->tl) {
            col->tableau = (int *) realloc(col->tableau, sizeof(int) * 256);
            col->tp += 256;
            if (col->tableau == NULL)
                return 0;
        }
    }
    col->tableau[col->tl] = value;
    col->tl += 1;
    return 1;
}

void delete_column(COLUMN **col){
    if (*col != NULL){
        free((*col)->tableau);
        *col = NULL;
    }
}

void print_col(COLUMN *col){
    for (int i = 0; i<col->tl; i++){
        printf("[%d] %d\n",i,col->tableau[i]);
    }
}

int nb_occurences(COLUMN *col, int x){
    int occurences = 0;
    for (int i = 0; i<col->tl; i++){
        if (col->tableau[i] == x)
            occurences += 1;
    }
    return occurences;
}


int value_pos(COLUMN *col, int x){
    if (x > col->tl)
        return 0;
    return col->tableau[x];
}

int val_sup(COLUMN *col, int x){
    int sup = 0;
    for (int i = 0; i<col->tl; i++){
        if (col->tableau[i] >= x)
            sup += 1;
    }
    return sup;
}

int val_inf(COLUMN *col, int x){
    int inf = 0;
    for (int i = 0; i<col->tl; i++){
        if (col->tableau[i] <= x)
            inf += 1;
    }
    return inf;
}

int val_egal(COLUMN *col, int x){
    int egal = 0;
    for (int i = 0; i<col->tl; i++){
        if (col->tableau[i] == x)
            egal += 1;
    }
    return egal;
}

void print_liml(COLUMN *col, int x){
    for (int i = 0; i<x; i++){
        printf("[%d] %d\n",i,col->tableau[i]);
    }
}

void add_line(COLUMN *col, int x){
    insert_value(col,x);
    col->tp += 1;
}

void add_col(COLUMN *col,char *name){

}