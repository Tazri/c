#include <stdio.h>

// typedef
typedef char * string;

int main(void){
    // create File pointer
    FILE *new_file;

    // get file name
    string file_name;
    printf("Please enter your file name : ");
    gets(file_name);


    new_file = fopen(file_name,"r");

    if(new_file == NULL){
        printf("File was not found.\n");
    }else{
        printf("This file was exist.\n");
    }

    printf("\n");
    return 0;
}