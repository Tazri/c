#include <stdio.h>

// string is one kind of data type but in c string is basically array
void main(){
    char name_one[] = {'T','a','z','r','i','\0'};
    char name_two[] = "Tazri";

    printf("name_one = %s\n",name_one);
    printf("name_two = %s\n",name_two);

    printf("\n\n\n");
}