
#ifndef UNTITLED3_COLUMN_H
#define UNTITLED3_COLUMN_H

/**
* Create a column
* @param1 : Column title
* @return : Pointer to created column
*/
COLUMN *create_column(char* title);


/**
* @brief : Add a new value to a column
* @param1 : Pointer to a column
* @param2 : The value to be added
* @return : 1 if the value is added 0 otherwise
*/
int insert_value(COLUMN* col, int value);



/**
* @brief : Free allocated memory
* @param1 : Pointer to a column
*/
void delete_column(COLUMN **col);



/**
* @brief: Print a column content
* @param: Pointer to a column
*/
void print_col(COLUMN* col);






#endif //UNTITLED3_COLUMN_H
