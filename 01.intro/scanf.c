#include <stdio.h>

int main(){
    int numberOne,numberTwo;

    printf("\n\n>>>>> Figure out sumation of two number <<<<<\n");
    printf("Enter the first number = ");
    scanf("%d",&numberOne);
    printf("\nEnter the second number = ");
    scanf("%d",&numberTwo);
    printf("\nsum of two number is = %d\n",numberOne+numberTwo); 

    float floatNumberOne, floatNumberTwo;
    printf("\n\nPrintf two float number >>> \n");
    scanf("%f %f",&floatNumberOne,&floatNumberTwo);
    printf("floatNumberOne = %f\n",floatNumberOne);
    printf("floatNumberTwo = %f",floatNumberTwo);

    return 0;
}