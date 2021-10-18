#include <stdio.h>

int main(int argc,char * agrv[]){
    // print all command
    printf(">>>> Command Details <<<<\n");
    printf("Total Command : %d",argc);

    for(int i = 0; i < argc; i++){
        printf("\nCommand No %i : %s",argc,agrv[i]);
    }

    printf("\n>>>> Finish Print Command <<<<");

    // finish the program here
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}