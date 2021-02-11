#include<stdio.h>

int main(){
    float numberOne, numberTwo,result;

    printf(">>>>Please Enter The Number One = ");
    scanf("%f",&numberOne);

    printf("\n>>>>Please Enter The NumberTwo = ");
    scanf("%f",&numberTwo);

    printf("\n\n\n>>>>> Result <<<<\n\n");
    
    result = numberOne + numberTwo;
    printf("\n%0.2f + %0.2f = %0.2f ",numberOne,numberTwo,result);

    result = numberOne - numberTwo;
    printf("\n%0.2f - %0.2f = %0.2f ",numberOne,numberTwo,result);

    result = numberOne * numberTwo;
    printf("\n%0.2f * %0.2f = %0.2f ",numberOne,numberTwo,result);

    result = numberOne / numberTwo;
    printf("\n%0.2f / %0.2f = %0.2f ",numberOne,numberTwo,result);

    return 0;
}