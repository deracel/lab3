#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int input_int_for_ind_delete(int *intx, int* n){
	int c = 0;
	int a;
	int sost = 0;
	int kol = 1;
	while(c != 1  ||  kol != 0 || *intx < 0 ){ 
		kol = 0;
		c = scanf("%d", &*intx);
		if (c == EOF && a != EOF){//EOF
            sost = 3;
            printf("                                       | Error code for insert ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
        	if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }  
        if (c == 0 || kol != 0){//incorrect input
            sost = 1;
            printf("                                       | Error code for insert ---> %d\n", sost);
        }
        if ((*intx < 0 || *intx >= *n) && kol == 0 && c != EOF){//value out of range
            sost = 2;
            printf("                                       | Error code for insert ---> %d\n", sost);
        }
        if (*intx >=0 && *intx < *n && kol == 0){//correct input
            sost = 0;
        }   
    }
    return sost;
}

int input_int_for_ind_insert(int *intx){
	int c = 0;
	int a;
	int sost = 0;
	int kol = 1;
	while(c != 1  ||  kol != 0 || *intx < 0 ){ 
		kol = 0;
		c = scanf("%d", &*intx);
		if (c == EOF && a != EOF){//EOF
            sost = 3;
            printf("                                       | Error code for insert ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
        	if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }  
        if (c == 0 || kol != 0){//incorrect input
            sost = 1;
            printf("                                       | Error code for insert ---> %d\n", sost);
        }
        if (*intx < 0 && kol == 0 && c != EOF){//value out of range
            sost = 2;
            printf("                                       | Error code for insert ---> %d\n", sost);
        }
        if (*intx >=0 && kol == 0){//correct input
            sost = 0;
        }   
    }
    return sost;
}

int input_int_for_task(int *intx){
	int c = 0;
	int a;
	int sost = 0;
	int kol = 1;
    printf("<<Enter the command: >>\n");
	while(c != 1  ||  kol != 0 || (*intx < 1 || *intx > 6)){ 
		kol = 0;
		c = scanf("%d", &*intx);
		if (c == EOF && a != EOF){//EOF
            sost = 3;
            printf("                                       | Error code for command ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
        	if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }  
        if (c == 0 || kol != 0){//incorrect input
            sost = 1;
            printf("                                       | Error code for command ---> %d\n", sost);
        }
        if ((*intx < 1 || *intx > 6) && kol == 0 && c != EOF){//value out of range
            sost = 2;
            printf("                                       | Error code for command ---> %d\n", sost);
        }
        if ((*intx >=1 && *intx <= 6) && kol == 0){//correct input
            sost = 0;
        }   
    }
    return sost;
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
            printf("                                         Error code for input ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
            if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }
        
        if (c == 0 || kol != 0){//некорректный ввод
            sost = 1;
            printf("                                         Error code for input ---> %d\n", sost);
        } 
    }
    return sost;
}


int input_int_init(int *input, int* output){
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
            printf("                                         Error code for input ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
            if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
                if(a == 35 && a != -1 && kol == 1){
                    *output = 1;
                    kol = kol - 1;
                    c = 1;
                }
			}
        }
        if (c == 0 || kol != 0){//некорректный ввод
            sost = 1;
            printf("                                         Error code for input ---> %d\n", sost);
        } 
    }
    return sost;
}