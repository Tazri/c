#include <stdio.h>

// function prototype
int add_up(int *array,int number_of_element);

void main(){
    int size;
    printf("Please enter the array size = ");
    scanf("%d",&size);

    int numbers[size];

    printf("\n\n>>>>>Enter the value<<<<<\n");
    for(int i = 0; i < size;i++){
        printf("numbers[%d] = ",i);
        scanf("%d",&numbers[i]);
    }

    printf("\n\n>>>> Your array is  <<<<\n");
    printf("[");
    for(int j = 0; j < size;j++){
        printf(" %d ",numbers[j]);
    }
    printf("]\n");

    int total = add_up(&numbers,size);
    printf("total sumation of numbers is = %d\n",total);

    printf("\n");
}

// add up function
int add_up(int *array,int number_of_element){
    int total = 0;
    for(int i = 0; i < number_of_element; i++){
        // total += *(array+i);
        total += array[i];
    }

    return total;
}