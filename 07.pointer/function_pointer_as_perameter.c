#include <stdio.h>

// function prototype
int getResult(int,int,int (*)(int,int));
int sum(int,int);

int main(void){
    int a,b;
    printf("Please Enter a = ");
    scanf("%d",&a);
    printf("\nPlease Enter b = ");
    scanf("%d",&b);

    int result = getResult(a,b,sum);

    printf("\n\n===> Result = %d\n",result);

    printf("\n\n");
    return 0;
}

int getResult(int number_one,int number_two,int (*function_pointer)(int,int)){
    return (*function_pointer)(number_one,number_two);
}

int sum(int number_one,int number_two){
    return number_one + number_two;
};