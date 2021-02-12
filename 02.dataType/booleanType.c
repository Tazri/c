#include <stdio.h>
#include <stdbool.h> // inlude boolean type functionality

int main(void){

    // short isLogIn = 0; // in here 0 means false;
    // short isLogIn = 1; // in here 1 means true;

    // another way to use boolean type data in c
    // bool isLogIn = true; // in here use bult in stdbool functionality
    bool isLogIn = false; // it means false in that case;

    printf("Are you log in : ");
    // scanf("%hd",&isLogIn);

    if(isLogIn){
        printf("\nUser Is log In.\n");
    }else{
        printf("\nUser is not log in.\n");
    }

    return 0;
}

/**
 * in c no boolean type data exist. If use boolean type data in c so include stdbool.h.
 * whith out include stdbool use boolean type data so in that case we use 0 and 1;
 * 0 mean false
 * 1 mean true
*/