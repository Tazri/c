#include <stdio.h>

int main(){
    int testcase,m,b,c,n,i;

    scanf("%d",&testcase);
    getchar();

    while(testcase--){
        scanf("%d",&n);

        m = 0;
        b = 0;
        for(i = 0;i < n;i++){
            scanf(" %d",&c);

            if(c & 1) b += c;
            else m += c;
        }

        getchar();

        if(m > b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}