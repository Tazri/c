#include <stdio.h>

typedef char string[100];

int main(void){
    // create file pointer 
    FILE *file;
    string file_name;

    // get file to open
    printf("\n>>>> Please Enter Your File Name : ");
    gets(file_name);
    
    // try to open the file in read mode
    file = fopen(file_name,"r");

    // if file dose not exist
    if(file == NULL){
        // print the messae is file dose not exist
        printf("\n>>>> File Dose not exist");
        printf("\n>>>> Do you want create file with this name ??");
        printf("\n>>>> yse(1), no(0)\n");
        printf("Command : ");

        // get user agree or not
        unsigned short isAgree;
        scanf("%hu",&isAgree);

        if(isAgree){
            // create the file and send the message
            file = fopen(file_name,"w");
            printf("\n\n>>>> File is Created Successfully!!");
            fclose(file);
        }else{
            printf("\n>>>> Program is Finished.");
        }
    }else{
        // alert the user file is open.
        printf(">>>>File is open.\nLoding......\n.....\n....\n...\n..\n.\n");

        // close the file again.
        fclose(file);
    }

    // extra line
    printf("\n\n");
    return 0;
}