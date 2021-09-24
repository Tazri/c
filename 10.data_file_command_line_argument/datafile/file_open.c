#include <stdio.h>

// typedef
typedef char string[20];

int main(void){
    // create file pointer
    FILE *new_file;
    string file_name;

    printf("Enter The File Name Please : ");
    gets(file_name);

    new_file = fopen(file_name,"w");

    fclose(new_file);
    printf("\n\n");
    return 0;
}