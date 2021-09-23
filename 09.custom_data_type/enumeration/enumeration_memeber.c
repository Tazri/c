#include <stdio.h>

enum month {
    Sep = 9,Oct,Nov,Dec,Jan=1,Feb,Mar,Apr
};

int main(void){
    enum month this_month = Oct;
    enum month next_month = Feb;
    int number = Oct;

    printf("This month %d\n",this_month);
    printf("Next month %d\n",next_month);
    printf("number = %d\n",number);

    printf("\n\n");
    return 0;
}