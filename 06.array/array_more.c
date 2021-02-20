#include <stdio.h>

int main(){
    int number[10];
    number[0] = 3;
    number[1] = 5;
    
    // printf full array
    for(int i = 0; i < 10;i++){
        printf("number[%d] = %d\n",i,number[i]);
    }

    // if i can not store value in array index then c compailer store them some garbege data;

    return 0;
}