#include <stdio.h>
#include "library.h"

void array_output(int* n, int* arr, int* k){
    printf("Array output:\n");
    printf("[- ");
    for (int i = 0; i < *k; ++i){
        printf("%d ", arr[i]);
    }
    printf("-]\n");
}