#include <stdio.h>

int main(int argc,char *argv[]){
    unsigned int total_beep;

    // check here is two argument
    if(argc < 2){
        // print finish program
        printf("\n--\n-\n>>>> Please Enter the Number <<<<\n");
        return 0;
    }

    total_beep = atoi(argv[1]);

    // if total beep 0;
    if(total_beep <= 0){
        printf("\n--\n-\n>>>> Please Enter Number Greater Then 0 <<<<\n");
        return 0;
    }

    // create beep sound
    printf("total_beep : %d",total_beep);
    for(int i = 0; i < total_beep; i++){
        printf("\a");
    }

    // print finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}