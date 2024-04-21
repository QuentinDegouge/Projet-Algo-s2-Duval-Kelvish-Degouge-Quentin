#define REALOC_SIZE 256

#include "Projet.h"
#include "column.h"
#include "CDataframe.h"


COLUMN *mycol = create_column("My column");
int val = 5;
if (insert_value(mycol, val))
    {
    printf("Value added successfully to my column\n")
    }
else
    {
    printf("Error adding value to my column\n");
    }
