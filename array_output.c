#include <stdio.h>
#include "library.h"

void array_output(int* n, int* arr){
    printf("Array output:\n");
    printf("[- ");
    for (int i = 0; i < *n; ++i){
        printf("%d ", arr[i]);
    }
    printf("-]\n");
}