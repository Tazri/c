#include <stdio.h>

#define print(m) printf("\n>>>> "#m" <<<<");

int main(void){
    print("hello, world");
    print(30)

    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}