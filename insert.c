#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void insert(int* arr, int ind_insert, int numb_insert, int* n, int* k){
    if(ind_insert > *k - 1){
        ind_insert = *k;
    }
    int i = *n - 1;
    *n = *n + 1;
    while (i >= ind_insert){
        arr[i + 1] = arr[i];
        i = i - 1;
    }
    arr[i + 1] = numb_insert;
}