#include <stdio.h>

int main(void){
    // create text file
    FILE * text_file = fopen("text.txt","w");
    char sentence[30];

    // write inside text
    printf("Please Inside write text for text file : ");
    gets(sentence);

    // write text inside the text.txt file
    fputs(sentence,text_file);

    // close the file
    fclose(text_file);

    // print program finish message
    printf("\n--\n-\n>>>> Program is finish <<<<\n");
    return 0;
}