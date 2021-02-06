#include <stdio.h>

// global variable
int globalNumber = 34;

int main(){
    int numberOne , numberTwo;
    numberOne = 200;
    numberTwo = 30;

    printf("numberOne = %d\n",numberOne);
    printf("numberTwo = %d\n", numberTwo);


    printf("\n\n\n>>>> Now calculate numberOne and numberTwo <<<<<\n");
    printf("%d + %d = %d\n",numberOne,numberTwo,numberOne+numberTwo);
    printf("%d - %d = %d\n",numberOne,numberTwo,numberOne-numberTwo);
    printf("%d * %d = %d\n",numberOne,numberTwo,numberOne * numberTwo);
    printf("%d / %d = %d ",numberOne,numberTwo,numberOne/numberTwo);
    printf(">>>>> Finish calculate by numberOne and numberTwo <<<<<\n\n");

    printf("\n\n>>> Reassign numberOne and numberTwo <<<<<\n");
    numberOne = 20;
    numberTwo = 10;
    printf("numberOne = %d \n",numberOne);
    printf("numberTwo = %d \n",numberTwo);
    printf("\n\n>>>>>Finish numberOne numberTwo reassign<<<<<\n\n");

    printf("globalNumber = %d\n",globalNumber);    
    
}

/**
 * int variablename; => here define variable and alocated memory.
 * variableName = value; here declear variable value;
 * 
 * If I want I do it both same time
 * int variableName = value; => here define and delcear variable at same tiem;
 * int =>  mean what type of variable.
 * /

/*
Variable type

There are two type of variable base by scope
global and scope type

There are two type of variable base by memory lefting
Static and Automatic

One more type variable 
External type variable
*/
