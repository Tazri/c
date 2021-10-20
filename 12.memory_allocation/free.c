#include <stdio.h>
#include <stdlib.h>

int main(void){
    // create number pointer for alocate memory
    int *number_pointer = NULL;
    number_pointer = (int *) calloc(1,sizeof(int));

    *number_pointer = 200;
    printf("\n>>>> Before Erase Memory <<<<\n");
    printf(">>>> number_pointer : %x\n",number_pointer);
    printf(">>>> *number_pointer : %d\n",*number_pointer); // 200

    // Erase Memory
    free(number_pointer);

    printf("\n>>>> After Erase Memory <<<<\n");
    printf(">>>> number_pointer : %x\n",number_pointer);
    printf(">>>> *number_pointer : %d\n",*number_pointer); // 0

    // printf finish
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}