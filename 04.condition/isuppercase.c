#include <stdio.h>

int main(void){
    char typeAny ;
    printf("Please type your charecter : ");
    scanf("%c",&typeAny);

    if(typeAny >= 65 && typeAny <= 95){
        printf("\n>>>Your charecter is a capital alphabet.\n");
    }else if(typeAny >= 97 && typeAny <= 127){
        printf("\n>>>Your charecter is small alphabet.\n");
    }else{
        printf("\n>>>It is not a charecter.\n");
    }
    return 0;
}