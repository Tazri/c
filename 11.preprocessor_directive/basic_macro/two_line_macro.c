#include <stdio.h>

#define IS_NEGATIVE(i) i < 0 ? "Negative" \
                                : "Positive"

int main(void){
    printf("4 is %s",IS_NEGATIVE(4));

    // print finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}