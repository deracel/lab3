#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void* rewrite(int* arr, int* n, int* k){
    int kol = *n;
    *n = 0;
    int* newArr = (int*)malloc(*k * sizeof(int));
    int s = 0;//index of newArr
    for(int j = 0; j < kol; ++j){
        if (arr[j] % 9 != 0){
            newArr[s] = arr[j];
            s += 1;
            *n += 1;
        }
    }
    if (*n < *k - N){
        int* nArr = (int*)malloc((*k - N) * sizeof(int));
        for (int o = 0; o < (*k - N); ++o){
            nArr[o] = newArr[o];
        }
        newArr = nArr;
        *k = *k - N;
        
    }
    return newArr;
}