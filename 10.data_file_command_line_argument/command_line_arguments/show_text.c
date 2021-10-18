#include <stdio.h>

int main(int argc,char *argv[]){
    // check user give the file name
    if(argc < 2){
        printf("\n--\n-\n>>>> Please Enter The file name <<<<\a\n");
        return 0;
    }

    // Try to open the folder
    FILE *file = fopen(argv[1],"r");

    if(file == NULL){
        printf("\n--\n-\n>>>> This File Maybe Cannot Exist or Open Error <<<<\a\n");
        return 0;
    }

    // read the file and print everything inside the file

    char line[255];

    printf(">>>> Inside the file : \n\n");
    while(fgets(line,sizeof(line),file))
    {
        printf("%s",line);
    }
    

    printf("\n\n--\n-\n>>>> Program is Successfully Finish <<<<\a\n");
    return 0;
}