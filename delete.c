#include <stdlib.h>
#include <stdio.h>
#include "library.h"

void delete(int* arr, int *n, int ind_delete, int* k){

    if (0 <= ind_delete && ind_delete < *n){
        int i = ind_delete;
        while (i < *n){
            arr[i] = arr[i + 1];
            i = i + 1;
        }
        *n = *n - 1;
    }
}