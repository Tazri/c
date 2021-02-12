#include <stdio.h>

int main(void){
    char t = '%';
    short shortNumber = 34;
    int intNumber = 34;
    long longNumber = 34;
    long long longLongNumber = 343;
    float floatNumber =34.23;
    double doubleNumber = 343.23;
    long double longDoubleNumber = 343;

    printf("sizeof(char) = %d\n",sizeof(t));
    printf("sizeof(short) = %d\n",sizeof(shortNumber));
    printf("sizeof(int) = %d\n",sizeof(intNumber));
    printf("sizeof(long) = %d\n",sizeof(longNumber));
    printf("sizeof(long long) = %d\n",sizeof(longLongNumber));
    printf("sizeof(float) = %d\n",sizeof(floatNumber));
    printf("sizeof(double) = %d\n",sizeof(doubleNumber));
    printf("sizeof(long double) = %d\n",sizeof(longDoubleNumber));
    
    
    return 0;
}