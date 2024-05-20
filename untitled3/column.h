
#ifndef UNTITLED3_COLUMN_H
#define UNTITLED3_COLUMN_H

typedef struct{
    char titre[20];
    int tp;
    int tl;
    int* tableau;
} COLUMN;

COLUMN *create_column(char *title);


int insert_value(COLUMN *col, int value);


void delete_column(COLUMN **col);


void print_col(COLUMN* col);


int nb_occurences(COLUMN *col, int x);


int value_pos(COLUMN *col, int x);


int val_sup(COLUMN *col, int x);


int val_inf(COLUMN *col, int x);


int val_egal(COLUMN *col, int x);


void print_liml(COLUMN *, int x);


void add_line(COLUMN *col, int x);


void delete_line(COLUMN *col);


int verif_val(COLUMN *col, int x);


#endif //UNTITLED3_COLUMN_H
