#include <stdio.h>

// structure
typedef struct {
    unsigned day : 5;
    unsigned month : 4;
    unsigned year : 7;
} Date;

// function prototype
void print_date(Date);

int main(void){
    // create date
    Date today;

    today.day = 24;
    today.month = 9;
    today.year = 21;

    print_date(today);

    printf("\n\n");
    return 0;
}

// print_date
void print_date(Date date){
    printf("\n===> The day is %d/%d/%d\n",date.day,date.month,date.year);
}