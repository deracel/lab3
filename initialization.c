#include <stdio.h>
#include "library.h"

void initialization(int* task, int* n, int* arr){
    int i = 0;//index of array
    int input;
    while (1){
        printf("Enter the value of the array\n");
        int y = input_int(&input);
        if (input == 0){// /
            break;
        }
        printf("Error code for initialization ---> %d\n", y);
        arr[i] = input;
        *n = *n + 1;
        i = i + 1;
    }
}