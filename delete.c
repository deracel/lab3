#include <stdlib.h>
#include <stdio.h>
#include "library.h"

void* delete(int* arr, int *n, int ind_delete, int* k){
    if (0 <= ind_delete && ind_delete < *n){
        int i = ind_delete;
        while (i < *n){
            arr[i] = arr[i + 1];
            i = i + 1;
        }
        *n = *n - 1;
    }
    if (*n < *k - N){
        int* newArr = (int*)calloc((*k - N), (*k - N) * sizeof(int));
        if (newArr == NULL){
            printf("An error occurred while allocating memory\n");
                
        }
        for (int o = 0; o < (*k - N); ++o){
            newArr[o] = arr[o];
        }
        *k = *k - N;
        arr = newArr;
    }
    return arr;
} 