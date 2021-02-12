#include <stdio.h>

int main(void){
    // there are 3 type of logical operator
    // && => and operator   
    // || => or operator
    // ! => not operator
    // logical operator should return 0 or 1;

    printf("3 < 4 && 4>2 = %d\n",3 < 4 && 4>2); // 1
    printf("3<3 || 34 < 2 = %d\n", 3 < 3 || 34 < 2); // 0
    printf("!3>2 = %d\n",!3>2); // 0
    return 0;
}