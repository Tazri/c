#include <stdio.h>

int main(void){
    int x_plus_y,x_minus_y,x,y;
    printf("x + y = ");
    scanf("%d",&x_plus_y);
    printf("\nx - y = ");
    scanf("%d",&x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = x_plus_y - x;
    printf("\n\n>>>> results <<<<\n\n");
    printf("X = %d",x);
    printf("\nY = %d\n",y);
    return 0;
}