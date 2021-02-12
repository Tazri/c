#include <stdio.h>

int main(void){
    short numberOne =10;
    short numberTwo = 3;

    // all arithmetic operators
    printf("Addition numberOne + numberTwo = %hd\n",numberOne+numberTwo);
    printf("Subtraction numberOne - numberTwo = %hd\n",numberOne-numberTwo);
    printf("Multiplecation numberOne * numberTwo = %hd\n",numberOne*numberTwo);
    printf("Division numberOne / numberTwo = %hd\n",numberOne/numberTwo);
    printf("Remainder numberOne remainder numberTwo = %hd\n",numberOne%numberTwo);

    // see infinity in c
    // printf("%d\n",3/0); // it can not work in c
    return 0;
}