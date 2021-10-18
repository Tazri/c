#include <stdio.h>

// create custom data type
typedef char string[];

int main(void){
    // create files
    FILE * fp;
    string file_name = "text.txt";

    // open the file for write;
    fp = fopen(file_name,"w");

    // write something inside the file
    string text = "HeLlo I am Md Tazri. Do You Know me";
    fputs(text,fp);
    fclose(fp);

    // open the file for read the file
    fp = fopen(file_name,"r");

    fseek(fp,3L,0);
    printf("chararcet = %c\n",getc(fp)); // l

    fseek(fp,-2L,2);
    printf("chararcet = %c\n",getc(fp)); // m

    fseek(fp,-4L,2);
    printf("chararcet = %c\n",getc(fp)); // w

    fseek(fp,2L,1);
    printf("chararcet = %c\n",getc(fp)); // w

    /*
        SEEK_SET 0 start position
        SEEK_CUR 1 current position
        SEEK_END 2 end position
    */

    fseek(fp,3L,SEEK_SET);
    printf("chararcet = %c\n",getc(fp)); // l

    fseek(fp,2L,SEEK_CUR);
    printf("chararcet = %c\n",getc(fp)); // I

    fseek(fp,-2L,SEEK_END);
    printf("chararcet = %c\n",getc(fp)); // m

    // finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}