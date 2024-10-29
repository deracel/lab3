#include <stdio.h>
#include "library.h"

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
            printf("Error code for command ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
        	if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }  
        if (c == 0 || kol != 0){//incorrect input
            sost = 1;
            printf("Error code for command ---> %d\n", sost);
        }
        if ((*intx < 1 || *intx > 6) && kol == 0 && c != EOF){//value out of range
            sost = 2;
            printf("Error code for command ---> %d\n", sost);
        }
        if ((*intx >=1 && *intx <= 6) && kol == 0){//correct input
            sost = 0;
        }   
    }
    return sost;
}