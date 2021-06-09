#include <stdio.h>

// function prototype
int sum(int,int);
int sub(int,int);
int multi(int,int);
int divide(int,int);

void main(){
    // array of function pointer
    int (*functions[])(int,int) = {
        sum,
        sub,
        multi,
        divide
    };

    int number_one,number_two;
    printf("Enter the number one = ");
    scanf("%d",&number_one);
    printf("Enter the number two = ");
    scanf("%d",&number_two);

    int result,operation_number;

    printf("\nSelect any number to operation both number\n");
    printf(">>> 0 for sum.\n");
    printf(">>> 1 for sub.\n");
    printf(">>> 2 for multi.\n");
    printf(">>> 3 for divide.\n");
    printf("Please select the operation number = ");
    scanf("%d",&operation_number);

    while(operation_number < 0 && operation_number > 3){
        printf("\n\nPlease enter the the correct number at 0 to 3\n");
        printf("Again enter the select number = ");
        scanf("%d",&operation_number);
    }

    result = functions[operation_number](number_one,number_two);

    printf("\n\n>>>> You Result is => %d",result);

    printf("\n\n");
}

// sum function
int sum(int number_one,int number_two){
    return number_one+number_two;
}

// sub function
int sub(int number_one,int number_two){
    return number_one - number_two;
}

// multi function
int multi(int number_one,int number_two){
    return number_one*number_two;
}

// divide 
int divide(int number_one,int number_two){
    return number_one / number_two;
}