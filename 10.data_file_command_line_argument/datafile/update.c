#include <stdio.h>

// function prototype
void message(char []);

int main(void){
    // create file pointer
    FILE * file = fopen("text.txt","a");

    if(file == NULL){
        message("File can't Open or Dose't Exist!");
    }else{
        fputs("\nThis line is appended\nbla bla bla",file);
    }

    return 0;
}

// message
void message(char m[]){
    printf("\n--\n-\n>>>> %s <<<<\n",m);   
}