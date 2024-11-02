#include <stdio.h>
#include "library.h"

void array_output(int* n, const int* arr, int* k){
    printf("Array output:\n");
    printf("                                       | [- ");
    for (int i = 0; i < *n; ++i){
        printf("%d ", arr[i]);
    }
    printf("-]\n");
}