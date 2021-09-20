#include <stdio.h>

void main(void){
    short int command;

    // create lebal
    start_here : 
    printf("Please Enter Your Command : ");
    scanf("%hd",&command);

    // check command
    if(command == 0){
        goto end_here;
    }else{
        goto start_here;
    }

    // end_here lebal
    end_here : 
    printf("\n\nYour Program Is Finish\n");
}