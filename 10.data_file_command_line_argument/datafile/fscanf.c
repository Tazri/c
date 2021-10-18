#include <stdio.h>

int main(void){
    // create file
    FILE * text_file;
    char file_name[] = "text.txt";

    text_file = fopen(file_name,"r");

    // read the file
    char name[30];
    double number;
    char grade;

    fscanf(text_file,"%s %lf %c",name,&number,&grade);
    printf("\nname : %s\nnumber : %0.2lf\ngrade : %c",name,number,grade);



    // print end message
    printf("\n--\n-\n>>>> Program is Finish <<<<\n");
    return 0;
}