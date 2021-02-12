#include <stdio.h>

int main(void){
    // there are two type of type conversion occur in c
    // implicit
    // explicit

    char t = 'T';

    printf("T = %c Tnum = %d Thex= %x Tfloat = %f\n",t,t,t,t);
    // in  here it covert the char type data into int and hex and float;

    // explicit convertion
    float numberOne = 2.3;
    float numberTwo = 2.34;
    float numberThree = 3.843;
    printf("normal Sum = %f\n",numberOne+numberTwo+numberThree);
    printf("\nexplixt Sum = %f\n",(int)numberOne+(int)numberTwo+(int)numberThree);
    return 0;
}