#include <stdio.h>


void main(void){
    int int_number = 10;
    float float_number = 3.23;
    char first_letter = 'T';
    void *ptr;

    ptr = &int_number;
    printf("int case *((int *)ptr) = %d\n",*((int *)ptr));

    ptr = &float_number;
    printf("flaot case  *((float *)ptr) = %0.2lf\n",*((float *)ptr));

    ptr = &first_letter;
    printf("char case *((char *)ptr) = %c\n",*((char *)ptr));


    printf("\n\n");
}