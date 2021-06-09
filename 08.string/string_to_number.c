#include <stdio.h>
#include <string.h>

void main(){
    // string to number
    char name[200];
    printf("Enter a number : ");
    fgets(name,200,stdin);

    // int number = atoi(name);
    // double float_number = atof(name);
    // long int long_int_number = atol(name);

    // printf("number = %d\n",number);
    // printf("float_number = %lf'\n",float_number);
    // printf("long_int_number = %ld\n",long_int_number);

    int number = strtol(name);
    printf("number = %d\n",strtol);

    printf("\n\n");
}