#include <stdio.h>

void main(){
    // input string by scanf
    // char name[20];
    // printf("Please enter your name : ");
    // scanf("%s",name);

    // printf("\nso your name is %s.\nhello %s\n",name,name);

    // one problem of scanf when input string. it input until space

    // input string by gets
    // char name[20];
    // printf("Please enter your name : ");
    // gets(name);
    // printf("\nso your name is %s.\nhello %s\n",name,name);

    // gets not safe

    // input string by fgets
    char name[20];
    printf("Please enter you name : ");
    fgets(name,20,stdin);
    printf("\nso your name is %s.\nhello %s\n",name,name);

    printf("\n\n");
}