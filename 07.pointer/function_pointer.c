#include <stdio.h>

// fuction prototype
int sum(int,int);
void print_hello(void);
int * return_array(void);

int main(){
    // create function pointer
    int (*pointer_sum)(int,int);
    void (*print_pointer)(void);
    int * (*array_pointer)(void);

    // function memory address
    printf("address of sum function sum = %x",sum);

    // store function in pointer
    pointer_sum = sum;
    print_pointer = print_hello;
    array_pointer = return_array;

    // call function by pointer
    (*print_pointer)();
    int result = (*pointer_sum)(29,23);
    int * array_address = (*array_pointer)();

    printf("Result = %d\n",result);
    printf("print array_adress = %x\n",array_address);
    printf("print secound element of array = %d\n",*(array_address+1));

    printf("\n\n");
    return 0;
}

// sum
int sum(int a,int b){
    printf("a + b = %d\n",a+b);
    return a+b;
}

// print_hello
void print_hello(){
    printf("\nHello, World!\n");
}


// return_array
int * return_array(){
    static int numbers[] = {3,200,2,3,4,2};
    return numbers;
}