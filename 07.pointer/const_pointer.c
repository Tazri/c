#include <stdio.h>

int main(){
    int number = 7;
    int number_two = 100;

    const int * const_int_pointer = &number;
    int * const int_const_pointer = &number;
    const int * const const_int_const_pointer = &number;

    number = 10;

    *int_const_pointer = 32;
    const_int_pointer = &number_two;

    printf("const_int_pointer = %x\n",const_int_pointer);
    printf("*const_int_pointer = %d\n",*const_int_pointer);


    printf("int_const_pointer = %x\n",int_const_pointer);
    printf("int_const_pointer = %d\n",*int_const_pointer);

    printf("const_int_const_pointer = %x\n",const_int_const_pointer);
    printf("const_int_const_pointer = %d\n",*const_int_const_pointer);

    printf("\n\n");
    return 0;
}