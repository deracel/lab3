#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void dialogue(int* task, int* n){
    *n = 0;
    int* arr;
    arr = (int*)malloc(*n * sizeof(int));
    while (*task != 6){
        int y = input_int_for_task(&*task);
        printf("Error code for command ---> %d\n", y);
        if (*task == 1){ 
            printf("You are starting initialization\n");
            *n = 0;
            initialization(&*task, &*n, &*arr);
            array_output(&*n, &*arr);
        }
        if (*task == 2){
            printf("You are starting the insertion\n");
            int ind_insert = 0;
            int numb_insert = 0;
            printf("Enter the index to which you want to insert the number:\n");
            int y1 = input_int_for_ind_insert(&ind_insert);
            printf("Error code ---> %d\n", y1);
            
            printf("Enter the number you want to add to the array:\n");
            int y2 = input_int(&numb_insert);
            printf("Error code ---> %d\n", y2);

            insert(&*arr, ind_insert, numb_insert, &*n);
            array_output(&*n, &*arr);
        }
        if (*task == 3){
                
        }
        if (*task == 4){
                
        }
        if (*task == 5){
            array_output(&*n, &*arr);
        }
    }
        if (*task == 6){
            return;
        }
}