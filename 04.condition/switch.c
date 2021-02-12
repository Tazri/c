#include <stdio.h>

int main(void){
    short number;
    printf("please enter a number at 1 -8 : ");
    scanf("%hd",&number);

    // start switch statement.

    switch(number){
        case 1:
        case 2:
        case 3:
        case 4:
            printf("\n>>>Your number is under the 4 or 4");
            break;
        case 5:
        case 6:
        case 7:
            printf("\n>>>Your number is over the 4 and under the 8.");
            break;
        case 8:
            printf("\n>>>Your number is 8.");
            break;
        default:
            printf("\n>>>Your number either over the 8 or under the 1.");
            break;
    }

    printf("\n\n");
    return 0;
}