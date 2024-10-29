#include <stdlib.h>

void delete(int* arr, int n, int ind_delete){
    if (0 <= ind_delete < n){
        int i = ind_delete;
        while (i < n){
            arr[i] = arr[i + 1];
            i = i + 1;
        }
    }
    for (int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
} 