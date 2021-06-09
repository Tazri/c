#include <stdio.h>

void main(){
    // learn about sprintf
    // char info[100];
    // char name[] = "Md Tazri";
    // int age = 17;

    // sprintf(info,"My name is %s and i'm %d year old.",name,age);
    // printf("%s",info);
    // sprintf use for create string combine another datatype

    // learn about ssscanf
    char info[] = "Bangladesh comilla 64000";
    char country[20];
    char city[20];
    int population;

    sscanf(info,"%s %s %d",country,city,&population);
    printf("He live at %s in %s and here live %d people.",city,country,population);

    printf("\n");
}