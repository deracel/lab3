#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void* multiples(int* arr, int* n, int* k1, int* nom){
    *nom = 0;
    int kol = *n;
    int* newArr = (int*)malloc(*k1 * sizeof(int));
    int s = 0;//index of newArr
    for(int j = 0; j < kol; ++j){
        if (arr[j] % 9 == 0){
            newArr[s] = arr[j];
            s += 1;
            *nom += 1;
        }
    }
    if (*nom < *k1 - N){
        int* nArr = (int*)malloc((*k1 - N) * sizeof(int));
        for (int o = 0; o < (*k1 - N); ++o){
            nArr[o] = newArr[o];
        }
        newArr = nArr;
        *k1 = *k1 - N;
    }
    return newArr;
}