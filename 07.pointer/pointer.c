#include <stdio.h>

void print(char n[1000]);

void main(){
    int number;
    int *pointer_of_number = NULL;
    int **pointer_of_pointer = NULL;
    
    printf("Please enter the number = ");
    scanf("%d",&number);

    pointer_of_number = &number;
    pointer_of_pointer = &pointer_of_number;

    printf("\n\n======>0<======\n\n");
    printf("You enter number is %d \n",number);
    printf("This number address is %x \n",&number);

    print("now it point it");
    printf("pointer_of_number = %x\n",pointer_of_number);
    printf("pointer_of_number value = %d\n",*pointer_of_number);
    printf("&pointer_of_number = %x\n",&pointer_of_number);

    print("\nnow see the pointer of pointer\n");

    printf("pointer_of_pointer = %x\n",pointer_of_pointer);
    printf("*pointer_of_pointer value is = %x\n",*pointer_of_pointer);
    printf("**pointer_of_pointer value is = %d\n",**pointer_of_pointer);

    printf("\n");
}

void print(char n[100]){
    printf("%s\n",n);
}