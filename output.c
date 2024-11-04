#include <stdio.h>
#include "library.h"

void array_output(int* n, int* arr, int* k){
    printf("Array output:\n");
    printf("                                       | [- ");
    for (int i = 0; i < *n; ++i){
        printf("%d ", arr[i]);
    }
    printf("-]\n");
}


void array_output9(int* nom, int* arr9){
    printf("Array output:\n");
    printf("                                       | [- ");
    for (int i = 0; i < *nom; ++i){
        printf("%d ", arr9[i]);
    }
    printf("-]\n");
}