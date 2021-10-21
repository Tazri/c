#include <stdio.h>

int main(void){

    unsigned long long number;

    printf("Please enter the number = ");
    scanf("%llu",&number);

    unsigned long long result = (number *(number+1))/2;
    printf("\n\n>>> result is = %llu\n\n",result);

    return 0;
}

/**
 * problem
 * 1+2+3+4+5+6.... =?
*/