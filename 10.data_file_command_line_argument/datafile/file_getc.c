#include <stdio.h>

// create costum keyword
typedef char string[];
typedef FILE * create_file;
typedef char letter;

int main(void){
    // create file and open it
    create_file text_file;
    string file_name = "text.txt";

    text_file = fopen(file_name,"r");

    // create char variable
    letter c;

    while ( c != EOF)
    {   
        printf("%c",c);
        c = getc(text_file);
    }
    

    // extra linek escape 
    printf("\n>>>>> Finish The Program <<<<<\n\n");
    return 0;
}