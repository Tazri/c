#include <stdio.h>

int main(void){
    // create file pointer
    FILE * file;
    char file_name[] = "text.txt";

    file = fopen(file_name,"w");

    // write something inside the file
    fprintf(file,"This is %s and I am \n %d Year Old.","Md Tazri",18);

    // close the file
    fclose(file);

    // print finish program message
    printf("\n--\n-\n>>>> Finish The Program <<<<\n");
}