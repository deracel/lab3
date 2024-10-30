#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void* insert(int* arr, int ind_insert, int numb_insert, int* n, int* k){
    if(ind_insert > *k - 1){
        ind_insert = *k;
    }
    int i = *n - 1;
    *n = *n + 1;
    if (*n > *k){
        printf ("ПОШЛА ВОЗЬНЯ! k + N = %d\n", *k + N);
            int* newArr = (int*)malloc((*k + N) * sizeof(int));
            if (newArr == NULL){
                printf("An error occurred while allocating memory\n");
                
            }
            for (int o = 0; o < *k; ++o){
                newArr[o] = arr[o];
            }
            *k = *k + N;
            arr = newArr;
    }
    while (i >= ind_insert){
        arr[i + 1] = arr[i];
        i = i - 1;
    }
    arr[i + 1] = numb_insert;
    return arr;
}