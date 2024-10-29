#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(){ 
    int task = 0;
    int n = 1;//size of array
    printf("Enter 1 if you want to initialize the array\n");
    printf("Enter 2 if you want to insert an element into the array\n");
    printf("Enter 3 if you want to remove an element from the array\n");
    printf("Enter 4 if you want to find in the sequence of integers those that are divisible by 9\n");
    printf("Enter 5 if you want to output the contents of the array\n");
    printf("Enter 6 if you want to exit the program\n");
    dialogue(&task, &n);
    
    return 0;
}