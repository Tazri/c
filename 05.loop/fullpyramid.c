#include <stdio.h>

int main(void){
    int number;
    printf("Please enter your number : ");
    scanf("%d",&number);
    printf("\n\n>>>> Your full pyramid <<<<\n\n");
    
    for(int i = 0 ; i < number; i++){
        for(int j = i + 1 ; j < number;j++){
            printf(" ");
        }

        for(int k = 0; k < (i*2) -1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/**
 * 
*/