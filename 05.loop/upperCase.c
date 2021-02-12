#include <stdio.h>

int main(void){
    char name[20];
    int i = 0;
    printf("Please Enter Your number : ");
    fgets(name,20,stdin);

    while(name[i]){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        i++;
    }

    printf("\n\n>>>> %s <<<<\n\n",name);

    printf("\nlast element %c\n",name[i]);

    return 0;
}