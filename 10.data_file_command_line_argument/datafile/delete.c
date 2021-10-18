#include <stdio.h>

int main(){
    char * delete_file_name = "d.t";

    if(remove(delete_file_name) == 0){
        printf("\n--\n-\n>>>> File Delete Successfully <<<<\a\n");
    }else{
        printf("\n--\n-\n>>>> File can not delete or file not exist <<<<\a\n");
    }

    return 0;
}