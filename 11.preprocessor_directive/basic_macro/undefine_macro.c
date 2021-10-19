#include <stdio.h>

#define square(a) (a*a)

int main(void){
    printf(">>>> square(%d) = %d\n",5,square(5));

    #undef square

    // printf(">>>> after undef square(%d) = %d\n",5,square(5)); // get compile error

    // printf
    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0 ;
}