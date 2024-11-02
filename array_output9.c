#include <stdio.h>
#include "library.h"

void array_output9(int* nom, int* arr9){
    printf("Array output:\n\n");
    printf("                                       | [- ");
    for (int i = 0; i < *nom; ++i){
        printf("%d ", arr9[i]);
    }
    printf("-]\n\n");
}