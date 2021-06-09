#include <stdio.h>

// function prototype
void say_hello(char *);

void main(void){
    // function pointer 
    void (*ptr_function)(char *);
    ptr_function = say_hello;
    
    ptr_function("Tazri");
    ptr_function("Erwin");

    printf("ptr_function = %x\n",ptr_function);
    printf("&say_hello = %x\n",&say_hello);

    printf("\n\n");
}

// pointer of function structure
// return_type (*pointername)(parameter);

void say_hello(char *name){
    printf("Hello, %s\n\n",name);
}