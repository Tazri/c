#include <stdio.h>
#include <string.h>

// create enum type data
enum bool {false,true};

int main(void){
    enum bool is_hot_day;

    is_hot_day = true;

    if(is_hot_day){
        printf("===> Is hot day = true\n");
    }else{
        printf("===> Is hot day = false\n");
    }

    printf("\n===> print true and false value <=== \n");
    printf("true = %d\n",true);
    printf("false = %d\n",false);

    printf("\n");
    return 0;
}