#include <stdio.h>

void swap(int *num_one,int *num_two);

void main(){
    int number_one,number_two;
    scanf("%d %d",&number_one,&number_two);

    printf("\n\n>>>>>Before Swap<<<<<\n");
    printf("number one = %d\n",number_one);
    printf("number two = %d\n",number_two);

    printf("\n\nAfter Swap\n\n");
    swap(&number_one,&number_two);
    printf("number one = %d\n",number_one);
    printf("number two = %d\n",number_two);

    printf("\n\n");
}

// swap function
void swap(int *num_one,int *num_two){
    int temp;
    temp = *num_two;
    *num_two = *num_one;
    *num_one = temp;
}