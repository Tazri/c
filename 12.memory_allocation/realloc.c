#include <stdio.h>
#include <stdlib.h>

// realloc

int main(void){
    // allocate the memory
    int *numbers_ptr = NULL;
    numbers_ptr = (int *) malloc(3*sizeof(int));

    // store the data
    *(numbers_ptr + 0) = 10;
    *(numbers_ptr + 1) = 20;
    *(numbers_ptr + 2) = 30;

    // print all data
    printf("\n>>>> Before reallocate <<<<\n");
    for(int i = 0; i < 5; i++){
        printf(">>>> Number[%d] = %d\n",i+1,*(numbers_ptr + i));
    }
    printf(">>>> Finish <<<<\n");

    // realocate the memory
    numbers_ptr = realloc(numbers_ptr,5*sizeof(int));

    *(numbers_ptr + 3) = 40;
    *(numbers_ptr + 4) = 50;

    // print all data
    printf("\n>>>> After reallocate <<<<\n");
    for(int i = 0; i < 5; i++){
        printf(">>>> Number[%d] = %d\n",i+1,*(numbers_ptr + i));
    }
    printf(">>>> Finish <<<<\n");

    // free the memory
    free(numbers_ptr);

    // printf finish
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}