#include <stdio.h>

int main(void){

    int number;
    printf("Please enter the number : ");
    scanf("%d",&number);
    printf("\n\n>>> Your Pyramid <<< \n\n\n");

    for(int i = 0; i <= number;i++){
        for(int j = 0 ; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}