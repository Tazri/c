#include <stdio.h>

int main(void){
    long long number;
    printf("Please enter the number : ");
    scanf("%lld",&number);

    if(number%2){
        printf("\nYour number is odd.\n");
    }else{
        printf("\nYour number is even.\n");
    }
    return 0;
}