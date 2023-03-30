#include <stdio.h>
/**
 * problem 
 * celcius to farenheit
*/
int main(void){
    double c,f;
    printf(">>> Celsius = ");
    scanf("%lf",&c);
    f = (c*1.8)+32;
    printf("\n>>> Farenheit = %.2lf\n\n",f);
    return 0;
}