#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

bool is_odd(long int n){
    return n &1;
}

int main(){
    int testcase,
        q, // for queries
        n, // array size
        a, // elment of array
        i, // iteration
        k,
        l_one,
        l_two,
        odd, // total odd
        even; // total even


    long int num;

    scanf("%d",&testcase);
    getchar();

    while(testcase--){
        scanf("%d %d",&n,&q);

        // storing array
        bool map[n+1];
        odd = 0;
        even = 0;

        for(i = 1;i <= n;i++){
            scanf(" %d",&a);

            map[i] = is_odd(a);

            if(is_odd(a)){
                odd++;
            }else{
                even++;
            }
        }
        getchar();

        // queries start
        for(i = 0;i < q;i++){
            scanf("%d %d %d",&l_one,&l_two,&k);
            getchar();
            
            if(is_odd(l_one)){
                odd--;
            }

            if(is_odd(l_two)){
                odd--;
            }

            if(is_odd(k)){
                odd +=2;
            }

            if(is_odd(odd)){
                printf("YES\n");
            }else{
                printf("NO\n");
            }

            if(is_odd(k)){
                odd -= 2;
            }

            if(is_odd(l_one)){
                odd++;
            }
            if(is_odd(l_two)){
                odd++;
            }
        }
    }

    return 0;
}