#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int userNumber,randomNumber,isGussing;
    time_t t;
    srand((unsigned)time(&t));
    randomNumber =rand() % 10 +1;
    isGussing = 0;
    while (!isGussing)
    {
        printf("\n>>>Please Enter the number under the 10 : ");
        scanf("%d",&userNumber);
        if(userNumber == randomNumber){
            isGussing = 1;
            printf("\n\n\n>>>> Congratulation You Win <<<<\n\n");
        }else{
            printf("\n>>> Please try again. <<<\n");
        }
    }
    
    

    return 0;
}