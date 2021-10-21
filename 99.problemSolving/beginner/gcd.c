#include <stdio.h>

/**
 * fint our greatest common divisior
*/

int main(void){
    int number_one,number_two,gcd,lowest_number;
    printf(">>> number one = ");
    scanf("%d",&number_one);

    printf(">>> number two = ");
    scanf("%d",&number_two);

    lowest_number = number_one < number_two? number_one : number_two;

    printf("lowest nunmer %d\n",lowest_number);
    while (lowest_number >= 1)
    {
        if(number_one % lowest_number == 0 && number_two % lowest_number == 0){
            
            gcd = lowest_number;
            break;
        }
        lowest_number--;
    }
    
    printf("\n\n>>>> G.C.D Is = %d\n",gcd);   
    return 0;
}