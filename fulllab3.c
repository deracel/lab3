#include <stdio.h>
#include <stdlib.h>

void dialogue(int* task, int* n);//dialogue window
void initialization(int* task, int* n, int* arr);//array init
int input_int_for_task(int* task);//input chek for task
int input_int(int* input);//input chel for array numbers
void array_output(int* n, int* arr);//array output

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

void dialogue(int* task, int* n){
    *n = 0;
    int* arr;
    arr = (int*)malloc(*n * sizeof(int));

    while (*task != 6){
        /**n = 0;
        int* arr;
        arr = (int*)malloc(*n * sizeof(int));
        free(arr);*/
        int y = input_int_for_task(&*task);
        printf("Error code ---> %d\n", y);
        if (*task == 1){
            /*int* arr;
            arr = (int*)malloc(*n * sizeof(int));*/
            
            *n = 0;
            initialization(&*task, &*n, &*arr);
            array_output(&*n, &*arr);
        }
        if (*task == 2){

        }
        if (*task == 3){
                
        }
        if (*task == 4){
                
        }
        if (*task == 5){
            array_output(&*n, &*arr);
        }
    }
        if (*task == 6){
            return;
        }
}

int input_int_for_task(int *intx){
	int c = 0;
	int a;
	int sost = 0;
	int kol = 1;
    printf("Введите команду\n");
	while(c != 1  ||  kol != 0 || (*intx < 1 || *intx > 6)){ 
		kol = 0;
		c = scanf("%d", &*intx);
		if (c == EOF && a != EOF){//EOF
            sost = 3;
            printf("Error code ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
        	if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }  
        if (c == 0 || kol != 0){//incorrect input
            sost = 1;
            printf("Error code ---> %d\n", sost);
        }
        if ((*intx < 1 || *intx > 6) && kol == 0 && c != EOF){//value out of range
            sost = 2;
            printf("Error code ---> %d\n", sost);
        }
        if ((*intx >=1 && *intx <= 6) && kol == 0){//correct input
            sost = 0;
        }   
    }
    return sost;
}

void initialization(int* task, int* n, int* arr){
    int i = 0;//index of array
    int input;
    int a;
    while (1){
        printf("Enter the value of the array:\n");
        int y = input_int(&input);
        if (input == 0){// /
            break;
        }
        printf("Error code ---> %d\n", y);
        arr[i] = input;
        *n = *n + 1;
        i = i + 1;
    }
}

void array_output(int* n, int* arr){
    printf("Array output:\n");
    printf("[- ");
    for (int i = 0; i < *n; ++i){
        printf("%d ", arr[i]);
    }
    printf("-]\n");
}

int input_int(int *input){
	int c = 0;
	int a;
	int sost = 0;
	int kol = 1;
	while(c != 1  ||  kol != 0){ 
		kol = 0;
		c = scanf("%d", &*input);
        sost = 0;
		if (c == EOF && a != EOF){//EOF
            sost = 3;
            printf("Error code ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
            if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }
        
        if (c == 0 || kol != 0){//некорректный ввод
            sost = 1;
            printf("Error code ---> %d\n", sost);
        } 
    }
    return sost;
}

