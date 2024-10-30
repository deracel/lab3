#include <stdlib.h>
#define N 10
void dialogue(int* task, int* n);//dialogue window
void* initialization(int* task, int* n, int* arr, int* k);//array init
int input_int_for_task(int* task);//input chek for task
int input_int(int* input);//input check for array numbers
void array_output(int* n, int* arr, int* k);//array output
void* insert(int* arr, int ind_insert, int numb_insert, int* n, int* k);//insert number in array
int input_int_for_ind_insert(int* ind_insert);
int input_int_for_ind_delete(int* ind_delete, int* n);
void* delete(int* arr, int* n, int ind_delete, int* k);//delete number from array