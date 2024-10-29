#include <stdio.h>
#include "library.h"

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
            printf("Error code for input ---> %d\n", sost);
            }
		while ((a = getchar()) != '\n' && a != EOF){
            if((a < 48 || a > 57) && a != -1){
        		kol = kol + 1;
			}
        }
        
        if (c == 0 || kol != 0){//некорректный ввод
            sost = 1;
            printf("Error code for input ---> %d\n", sost);
        } 
    }
    return sost;
}