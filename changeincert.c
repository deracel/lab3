#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void changeincert(int** arr, int* n, int* k){
    if (*n + 1 > *k){
        int* newArr = realloc(*arr, (*k + N) * sizeof(int));
        if (newArr == NULL){
            printf("An error occurred while allocating memory\n");   
        }
        *k = *k + N;
        *arr = newArr;
      
    }
}   