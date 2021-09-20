#include <stdio.h>

int main(){
    int number = 23;
    int * null_pointer = NULL;

    printf("null_pointer = %x\n",null_pointer);
    null_pointer = &number;
    printf("\nNuw null_pointer point number\n");
    printf("null_pointer = %x\n",null_pointer);
    printf("*null_pointer = %d\n",*null_pointer);

    return 0;
}