#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int randomNumber;
    time_t t;

    srand((unsigned)time(&t));

    randomNumber = rand() % 50 + 1;
    printf("\n>>> %d <<<\n\n",randomNumber);
    return 0;
}