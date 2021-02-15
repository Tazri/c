#include <stdio.h>

int main(void){
    int number[] = {2,3,5,6};
    // printf("sizeof(number) = %d\n",sizeof(number));
    // printf("sizeof(number[0]) = %d\n",sizeof(number[0]));
    // printf("sizeof(number[1]) = %d\n",sizeof(number[1]));
    // printf("sizeof(number[2]) = %d\n",sizeof(number[2]));
    // printf("sizeof(number[3]) = %d\n",sizeof(number[3]));
    // printf("sizeof(number[4]) = %d\n",sizeof(number[4]));
    
    int length = sizeof(number)/sizeof(number[0]);
    printf("\n\n>>> length = %d\n",length);
    return 0;
}