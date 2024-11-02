#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void changedelete(int** arr, int* n, int* k){
    if (*n < *k - N){
        int* newArr = realloc(*arr, (*k - N) * sizeof(int));
        if (newArr == NULL){
            printf("An error occurred while allocating memory\n");    
        }
        *k = *k - N;
        *arr = newArr;
        free(newArr);
    }
}   