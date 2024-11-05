#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#define N 10

void* initialization(int* task, int* n, int* arr, int* k){
    int i = 0;//index of array
    int input;
    int output = 0;
    int* newArr;
    while (1){
        if (*k >= *n){
            printf("Value: ");
            int y = input_int_init(&input, &output, arr);
            if (output == 1){
                break;
            }
            if (*k != *n){
                printf("                                       | Error code for initialization ---> %d    ", y);
            }
            arr[i] = input;
            if (*k != *n){
                array_output(n, arr, k);
                printf("                                       | Capacity = %d, size = %d\n", *k, *n);
            }
            i = i + 1;
        }
        if (*k <= *n){
            newArr = (int*)malloc((*k + N) * sizeof(int));
            if (newArr == NULL){
                printf("An error occurred while allocating memory\n");
                break;
            }
            for (int o = 0; o < *k; ++o){
                newArr[o] = arr[o];
            }
            *k = *k + N;
            /**n = *n - 1;*/
            free(arr);
            arr = newArr;
            printf("                                       | Error code for initialization ---> 0    ");
            array_output(n, arr, k);
            printf("                                       | Capacity = %d, size = %d\n", *k, *n);
        }
        *n = *n + 1;
    }
    return arr;
}

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

void* multiples(int* arr, int* n, int* k1, int* nom){
    *nom = 0;
    int kol = *n;
    int* newArr = (int*)malloc(*k1 * sizeof(int));
    int s = 0;//index of newArr
    for(int j = 0; j < kol; ++j){
        if (arr[j] % 9 == 0 && arr[j] != 0){
            newArr[s] = arr[j];
            s += 1;
            *nom += 1;
        }
    }
    while(*nom < *k1 - N){
        *k1 = *k1 - N;
    }
    int* nArr = (int*)malloc((*k1) * sizeof(int));
    for (int o = 0; o < (*k1); ++o){
        nArr[o] = newArr[o];
    }
    free(newArr);
    newArr = nArr;
    return newArr;
}


void* rewrite(int* arr, int* n, int* k){
    int kol = *n;
    *n = 0;
    int* newArr = malloc(*k * sizeof(int));
    int s = 0;//index of newArr
    for(int j = 0; j < kol; ++j){
        if (arr[j] % 9 != 0 || arr[j] == 0){
            newArr[s] = arr[j];
            s = s + 1;
            *n = *n + 1;
        }
    }
    free(arr);
    while(*n < *k - N){
        *k = *k - N;
    }
    int* nArr = (int*)malloc((*k) * sizeof(int));
    for (int o = 0; o < /*(*k)*/*n; ++o){
        nArr[o] = newArr[o];
    }

    free(newArr);
    return nArr;
}


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