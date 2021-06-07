#include <stdio.h>

void main(){
    int numbers[] = {34,3,2,12};
    int *pointer_of_number = &numbers;
    int i;
    // printf("&numbers = %x\n",&numbers);
    // printf("pointer_of_number = %x\n",pointer_of_number);
    // printf("numbers[0] = %d\n",numbers[0]);
    // printf("*pointer_of_number = %d\n",*pointer_of_number);

    // traverse the array by pointer
    // for(i = 0;i < 4;i++){
    //     printf("numbers[%d] = %d\n",i,*(pointer_of_number+i));
    // }


    //create iterator with pointer

    for(i = 0;i < 4;i++){
        printf("*pointer_of_number and numbers[%d] = %d\tpointer_of_number = %x\n",i,*pointer_of_number,pointer_of_number);
        pointer_of_number++;
    }

    printf("\n\n\n");
}