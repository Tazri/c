#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calloc
// prototype : void * calloc(size_t nitems,size_t size);

int main(void){
    int *number_list = NULL;
    number_list = (int *)calloc(4,sizeof(int));

    *number_list = 30;
    *(number_list + 1) = 40;
    *(number_list + 2) = 50;
    *(number_list + 3) = 60;

    for(int i = 0; i < 4; i++){
        printf(">>>> Number %d = %d\n",i+1,*(number_list+i));
    }

    // printf finsih
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}