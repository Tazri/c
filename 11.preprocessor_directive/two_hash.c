#include <stdio.h>

#define N(i) 10 ## i

int main(void){
    printf(">>>> N(4) = %d\n",N(4));
    printf(">>>> N(6) = %d\n",N(6));
    printf(">>>> N(100) = %d\n",N(100));

    // program finish
    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}