#include <stdio.h>

// create typedef
typedef char * string;
typedef FILE * CREATE_FILE;
typedef char letter;

int main(void){
    // decleare neccessary veriable
    string file_name = "text.txt";
    CREATE_FILE text_file = fopen(file_name,"w");
    letter ch;

    // write something in file
    printf("Please Enter Write Something in text.txt : \n\n");
    
    while((ch = getchar()) != EOF){
        putc(ch,text_file);
    }

    // close the file
    fclose(text_file);


    printf("\n\n>>>> Printf inside the file : \n\n");

    // open the file for read
    text_file = fopen(file_name,"r");
    
    while((ch = getc(text_file)) != EOF){
        printf("%c",ch);
    }

    // close the file
    fclose(text_file);

    printf("\n");
    return 0;
}