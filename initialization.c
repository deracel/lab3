#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#define N 10

void* initialization(int* task, int* n, int* arr, int* k){
    int i = 0;//index of array
    int input;
    while (1){
        /*printf("Enter the value of the array\n");
        int y = input_int(&input);
        if (input == 0){// /
            break;
        }
        printf("Error code for initialization ---> %d    ", y);*/
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
                array_output(&*n, &*arr, &*k);
            }
            /*printf("запись числа %d по индексу = %d, массив имеет длину = %d\n", arr[i], i, *n);*/
            /*array_output(&*n, &*arr);*/
            i = i + 1;
        }
        if (*k < *n){
            /*int* newArr = (int*)calloc((*k + N), (*k + N) * sizeof(int));*/
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
            /*array_output(&*n, &*arr);*/
            printf("                                       | Error code for initialization ---> 0    ");
            array_output(&*n, &*arr, &*k);
        }
        /*array_output(&*n, &*arr, &*k);*/
        *n = *n + 1;
    }
    return arr;
}