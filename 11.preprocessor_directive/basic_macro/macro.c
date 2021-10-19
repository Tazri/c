#include <stdio.h>

#define CHECK if(x>y)
#define PRINT printf("It working fine.");

int main(void){
    int x = 40;
    int y = 20;

    CHECK PRINT

    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}