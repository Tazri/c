#include <stdio.h>

#define FALSE 0

int main(void){
    int a = 20 , b = 5;

    #if 20 < 1
        printf(">>>> small and big \n");
    #elif 20 == 1
        printf(">>>> Both equal <<<<\n");
    #else
        printf("big and small\n");
    #endif

    #ifdef TRUE
        printf(">>>> TRUE is define");
    #endif

    #ifndef TRUE
        printf("\n>>>> TRUE is not define");
    #endif

    #ifdef FALSE
        printf("\n>>>> FALSE is define");
    #endif

    #ifndef FALSE
        printf(">>>> FALSE is not define");
    #endif

    // printf program finish
    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}