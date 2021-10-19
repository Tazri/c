#include <stdio.h>

#define ADD(a,b) (a + b)

int main(void){
    printf("%d + %d = %d\n",10,20,ADD(10,20));

    printf("\n--\n-\n>>>> Program Finish <<<<");
    return 0;
}