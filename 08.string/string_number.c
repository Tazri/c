#include <stdio.h>
#include <stdlib.h>

int main(void){
    char number[20];
    printf("Please Enter Your Name : ");
    gets(number);

    printf("\n\n===> Convert Number <===\n");
    printf("Number : %s\n",number);
    printf("(float)atof = %f\n",atof(number));
    printf("(int)atoi = %d\n",atoi(number));
    printf("(long int)atol = %ld\n",atol(number));

    return 0;
}