#include <stdio.h>

void main(){
    int numberTow = 36;
    int number = 10;
    int *pointer = &number;

    printf("number %d\n",number);
    printf("*pointer = %d \n",*pointer);

    // *pointer++;

    *pointer +=40;
    printf("number = %d \n",number);
    printf("*pointer = %d\n",*pointer);


    printf("\n\n");
}