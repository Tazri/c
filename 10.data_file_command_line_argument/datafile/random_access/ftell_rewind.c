#include <stdio.h>

// custom data type
typedef char letter;

int main(void){
    // create file pointer
    FILE * file;
    char file_name[30];

    printf(">>>> Please Enter Your File Name : ");
    gets(file_name);

    // create the file
    file = fopen(file_name,"w+");

    // write inside the file
    printf(">>>> Writing Started\n");
    printf(">>>> If writing is finsih please press ctrl + d to end ...\n\n");
    letter l;

    while ((l = getchar()) != EOF)
    {
        putc(l,file);
    }
    
    // analysing the file
    long long int total_character = ftell(file);
    printf("\n\n>>>> Analysing <<<<\n");
    printf("Total Character : %lld\n",total_character);
    fseek(file,-1L,SEEK_END);
    printf("The Last Character : %c\n",getc(file));
    rewind(file);
    printf("The First Character : %c\n",getc(file));

    // finish program
    printf("\n-\n--\n>>>> Finish Program <<<<\n");
    return 0;
}