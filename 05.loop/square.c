#include <stdio.h>

int main(void){
    long long number;
    printf(">>>> Please enter the number : ");
    scanf("%lld",&number);
    printf("\n\n>>> The square is <<<\n\n");
    
    for(int i = 0; i < number;i++){
        for(int j = 0; j < number;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}