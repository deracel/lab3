#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#define N 10

void* initialization(int* task, int* n, int* arr, int* k){
    int i = 0;//index of array
    int input;
    while (1){
        if (*k >= *n){
            printf("Value: ");
            int y = input_int(&input);
            if (input == 0){
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
        if (*k < *n){
            int* newArr = (int*)malloc((*k + N) * sizeof(int));
            if (newArr == NULL){
                printf("An error occurred while allocating memory\n");
                break;
            }
            for (int o = 0; o < *k; ++o){
                newArr[o] = arr[o];
            }
            *k = *k + N;
            *n = *n - 1;
            arr = newArr;
            printf("                                       | Error code for initialization ---> 0    ");
            array_output(n, arr, k);
            printf("                                       | Capacity = %d, size = %d\n", *k, *n);
        }
        *n = *n + 1;
    }
    return arr;
}