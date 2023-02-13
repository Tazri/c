#include <stdio.h>
#include <math.h>

int main(){
    int testcase,j = 0;
    long long int 
                 rowi,
                 number,
                 x,
                 y,
                 diff,
                 end,
                 temp;

    // get test case
    scanf(" %d",&testcase);

    while (testcase--)
    {
        // get number
        scanf("%lld",&number);

        rowi = ceil(sqrt(number));
        end = (rowi*rowi);
        
        diff = end - number;

        if(diff >= rowi){
            y = rowi; // is stable
            x = rowi - (diff - rowi) -1; // x is chaning
        }else{
            x = rowi; // x is stable
            y = diff + 1;
        }

        if(rowi & 1){
            temp = x;
            x = y;
            y = temp;
        }

        printf("Case %d: %lld %lld\n",++j,x,y);
    }
    

    return 0;
}