#include <stdio.h>

int main(void){
    int a1,a2,b1,b2,c1,c2,x,y;
    
    // take first expression
    printf("\n\n>>> First expression <<<\n");
    printf("a1 = ");
    scanf("%d",&a1);
    printf("b1 = ");
    scanf("%d",&b1);
    printf("result = ");
    scanf("%d",&c1);

    printf("\n\n>>> Secound expression <<<\n");
    printf("a2 = ");
    scanf("%d",&a2);
    printf("b2 = ");
    scanf("%d",&b2);
    printf("result = ");
    scanf("%d",&c2);

    printf("\n\n>>> Your expression is <<< \n\n");
    printf("%dx + %d = %d\n",a1,b1,c1);
    printf("%dx + %d = %d",a2,b2,c2);
    
    printf("\n\n>>>> Result <<<<\n\n");
    // find the y
    int c2a1 = c2 * a1;
    int a2c1 = a2 * c1;
    int a1b2 = a1 * b2;
    int a2b1 = a2 * b1;
    y = (c2a1-a2c1) / (a1b2-a2b1);

    // find the x
    int b1y = b1*y;
    x = (c1-b1y) / a1;

    printf("\n>>> x = %d \n",x);
    printf("\n>>> y = %d \n",y);


    return 0;
}