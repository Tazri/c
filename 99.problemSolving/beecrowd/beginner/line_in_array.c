#include <stdio.h>

int main(void){
    int row,col,max_track,min_track;
    double result,number;
    char t;
    result = 0,max_track = 11,min_track = 0;

    scanf("%c",&t);

    // get all table number
    for(row = 0; row < 12;row++){
        for(col = 0 ; col < 12; col++){
            // get number from user
            scanf("%lf",&number);
            
            if(col < max_track && col > min_track ){
                result += number;
            }

        }
        // increament track every raw
        max_track--;
        min_track++;
    }

    // print result
    // S for sum
    // M for average
    if(t == 'S'){
        printf("%.1lf\n",result);
    }else if(t == 'M'){
        printf("%.1lf\n",result/30.0);
    }

    return 0;
}