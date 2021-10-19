#include <stdio.h>

void start(void);
void ends(void);

#pragma startup start
#pragma exit ends 

int main(void){
    printf(">>>> This is main function <<<<\n");
    return 0;
}

void start(void){
    printf(">>>> This is start function <<<<\n");
}

void ends(void){
    printf(">>>> This is ends funciton <<<<\n");
}