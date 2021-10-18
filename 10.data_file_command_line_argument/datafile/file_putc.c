#include <stdio.h>

// create costum keyword
typedef char letter;
typedef letter string[50];
typedef FILE *Create_File;

int main(void){
    // create file and file property
    Create_File user_file;
    string file_name;

    // print message for command
    printf(">>>> Please Enter Your File Name With Extension : ");
    gets(file_name);

    // create the folder 
    user_file = fopen(file_name,"w");

    // message to write something inside the file
    printf(">>>> Print Your Text or Message Inside the file : \n\n");
    
    // write something inside the file
    letter c;
    c = getchar();

    while (c != EOF)
    {
        putc(c,user_file);
        c = getchar();
    }
    
    printf(">>>> Write is complate <<<<");

    // print program finish message
    printf("--\n-\n>>>> Program is Finish <<<<\n");

    return 0;
}