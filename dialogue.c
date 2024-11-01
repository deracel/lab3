#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#define N 10

void dialogue(int* task, int* n){
    int k = N;
    int p = 0;
    int* arr;
    while (*task != 6){
        greeting();
        int y = input_int_for_task(&*task);
        printf("Error code for command ---> %d\n\n", y);
        if (*task == 1){ 
            p = p + 1;
            if (p > 1){
                free(arr);
                k = N;
            }
            /*arr = (int*)calloc(N, N * sizeof(int));*/
            arr = (int*)malloc(N * sizeof(int));
            printf("You are starting initialization\n");
            *n = 1;
            arr = initialization(&*task, &*n, &*arr, &k);
            *n = *n - 1;
            printf("                                       | Error code for initialization ---> 0    ");
            array_output(&*n, &*arr, &k);
            printf("                                       | Capacity = %d, size = %d\n", k, *n);
            printf("\n");
        }
        if (*task == 2){
            if(p != 0){
                printf("You are starting the insertion\n");
                int ind_insert = 0;
                int numb_insert = 0;
                printf("Index: ");
                int y1 = input_int_for_ind_insert(&ind_insert);
                printf("                                       | Error code ---> %d    \n", y1);
            
                printf("Number: ");
                int y2 = input_int(&numb_insert);
                printf("                                       | Error code ---> %d    ", y2);
                if (*n + 1 > k){
                    changeincert(&arr, n, &k);
                }
                insert(arr, ind_insert, numb_insert, n, &k);
                array_output(n, arr, &k);
                printf("                                       | Capacity = %d, size = %d\n", k, *n);
                printf("\n");
                
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
        if (*task == 3){
            if(p != 0){
                printf("You are starting deleting\n");
                int ind_delete;
                printf("Enter the index which you want to delete:\n");
                int y3 = input_int_for_ind_delete(&ind_delete, &*n);
                printf("                                       | Error code ---> %d    ", y3);

                delete(arr, n, ind_delete, &k);
                changedelete(&arr, n, &k);
                array_output(n, arr, &k);
                printf("                                       | Capacity = %d, size = %d\n", k, *n);
                printf("\n");
                
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
        if (*task == 4){
            if(p != 0){
                arr = multiples(&*arr, &*n, &k);
                printf("                                       | Sorted array:    ");
                array_output(&*n, &*arr, &k);
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
        if (*task == 5){
            if(p != 0){
                printf("                                         ");
                array_output(&*n, &*arr, &k);
                printf("                                       | Capacity = %d, size = %d    ", k, *n);
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
    }
        if (*task == 6){
            return;
        }
    free(arr);
}