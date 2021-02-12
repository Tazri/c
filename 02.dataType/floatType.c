#include<stdio.h>

int main(void){
    // float type data
    printf(">>>>Pring Float Type Data<<<<\n\n\n");

    // float type number
    float floatNumber = 343.34f;
    printf("This is floatNumber = %f\n",floatNumber);

    // double type number
    double doubleNumber = 342.234;
    printf("This is doubleNumber = %lf\n",doubleNumber);

    // long double type number
    long double longDoubleNumber = 342.3;
    printf("This is longDoubleNumber = %Lf\n",longDoubleNumber);
    
    return 0;
}