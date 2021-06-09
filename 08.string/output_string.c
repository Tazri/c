#include <stdio.h>

// three way to output the string
// printf
// puts
// fputs

void main(){
    char name[20];
    printf("Enter your name : ");
    fgets(name,20,stdin);
    // scanf("%s",name);

    // output the string by printf
    printf("You say you name is : ");
    printf("%s\n",name);

    // output the string by puts
    printf("You say your name is : ");
    puts(name); 

    // output the string by fputs
    printf("Your say your name is : ");
    fputs(name,stdout);

    // printf("\n\n");
}