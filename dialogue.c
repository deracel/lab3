#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#define N 10
#define K 5

void dialogue(int* task, int* n){
    int k = K;
    int p = 0;
    int* arr;
    while (*task != 6){
        greeting();
        int y = input_int_for_task(task);
        printf("Error code for command ---> %d\n\n", y);
        if (*task == 1){ 
            p = p + 1;
            if (p > 1){
                free(arr);
                k = K;
            }
            /*arr = (int*)calloc(N, N * sizeof(int));*/
            arr = (int*)malloc(K * sizeof(int));
            printf("You are starting initialization (print '#' to end)\n");
            *n = 1;
            /*free(arr);*/
            arr = initialization(task, n, arr, &k);
            *n = *n - 1;
            printf("                                       | Error code for initialization ---> 0    ");
            array_output(n, arr, &k);
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
                if (*n < k - N){
                    changedelete(&arr, n, &k);
                }
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
                int nom;
                int* nArr;
                int k1 = k;
                int* arr9 = multiples(arr, n, &k1, &nom);
                printf("                                       | Sorted array:    ");
                array_output9(&nom, arr9);
                printf("                                       | Capacity = %d, size = %d    ", k1, nom);
                printf("\n");
                printf("\n");
                nom = 0;
                free(arr9);
                arr = rewrite(arr, n, &k);
                printf("                                       | Changed array:   ");
                array_output(n, arr, &k);
                printf("                                       | Capacity = %d, size = %d\n", k, *n);
                printf("\n");
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
        if (*task == 5){
            if(p != 0){
                printf("                                       | ");
                array_output(n, arr, &k);
                printf("                                       | Capacity = %d, size = %d    ", k, *n);
                printf("\n");
            }
            else{
                printf("<<Error: You have not initialized the array>>\n\n");
            }
        }
        if (*task == 6){
            return;
        }
    }
    free(arr);
}


