#include <stdio.h>

int main(){
    int testcase,a,b,c;

    scanf("%d",&testcase);
    getchar();

    while(testcase--){
        scanf("%d %d %d",&a,&b,&c);
        getchar();

        if((a+b)==c){
            printf("+\n");
        }else{
            printf("-\n");
        }
    }
    return 0;
}