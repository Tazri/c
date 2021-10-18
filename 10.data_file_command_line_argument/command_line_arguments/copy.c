#include <stdio.h>

// function prototype
void finish_program(char []);

int main(int argc,char *argv[]){
    // check your give 3 argument
    if(argc < 3){
        if(argc < 2){
            finish_program("Please Enter Target File");
            return 0;
        }else{
            finish_program("Please Enter Dist File");
        }
    }

    // check input file exist
    FILE * input_file = fopen(argv[2],"r");

    if(input_file == NULL){
        finish_program(">>>> Your Input File Dose't Exist or Open Error <<<<");
        return 0;
    }

    // create output file
    FILE * output_file = fopen(argv[1],"w");
    char line[244];

    while (fgets(line,sizeof(line),input_file))
    {
        fputs(line,output_file);
    }
    
    finish_program("Program Successfully Finish.");
    return 0;
}

// finish_program
void finish_program(char message[]){
    printf("\n--\n-\n>>>> %s <<<<\n",message);
}