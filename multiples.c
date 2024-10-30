#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void* multiples(int* arr, int* n, int* k){
    int kol = *n;
    int nom = 0;
    int* newArr = (int*)calloc(*k, *k * sizeof(int));
    int s = 0;//index of newArr
    for(int j = 0; j < kol; ++j){
        if (arr[j] % 9 == 0){
            newArr[s] = arr[j];
            s += 1;
            nom += 1;
        }
    }
    arr = newArr;
    /*for (int i = 0; i < *k; ++i){
        printf("%d ", arr[i]);
    }*/
    if (nom < *k - N){
        int* nArr = (int*)calloc((*k - N), (*k - N) * sizeof(int));
        for (int o = 0; o < (*k - N); ++o){
            nArr[o] = arr[o];
        }
        *k = *k - N;
        arr = nArr;
    }
    /*for (int i = 0; i < *k; ++i){
        printf("%d ", arr[i]);
    }*/
    return arr;
}