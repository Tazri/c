#include <stdio.h>

// create costum data type
typedef char letter;
typedef letter string[];

int main(void){
    // create file
    FILE * text_file;
    string file_name = "text.txt";

    // open the file
    text_file = fopen(file_name,"r");

    // print everything inside the file
    letter text[40];
    fgets(text,30,text_file);

    printf(">>>> Inside the text file : \n\n%s\n",text);

    // printf finish message
    printf("--\n-\n>>>> Programm is finish <<<<\n");
    return 0;
}