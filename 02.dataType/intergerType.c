#include<stdio.h>

int main(void){
    printf(">>>> Lets start learn about Interger Type data <<<<\n\n");

    // short interger type data %hi
    short shortNumber = 304;
    printf("This is shortNumber = %hi\n",shortNumber);

    // int type data %d
    int intNumber = 33;
    printf("This is intNumber = %d\n",intNumber);

    // long type data %ld
    long longNumber = 343;
    printf("This is longNumber = %ld\n",longNumber);

    // long long number %lld
    long long longLongNumber = 3423;
    printf("This is longLongNumber = %lld\n",longLongNumber);

    //  unsigned short int %hu
    unsigned short unsignedShortNumber = 333;
    printf("This is unsignedShortNumber = %hu\n",unsignedShortNumber);

    // unsigned long int %lu
    unsigned long unsignedLongNumber = 324l;
    printf("This is unsignedLongNumber = %lu\n",unsignedLongNumber);

    // unsigned long long int %llu
    unsigned long long unsignedLongLongNumber = 3432l;
    printf("This is unsignedLongLongNumber = %llu\n",unsignedLongLongNumber);

    printf("\n\n>>>>>Fininsh Integer Type Data <<<<<\n\n\n\n");

    printf(">>>> Other number System in c <<<<<\n\n");
    // other type number system by integer
    
    // octal type code %o
    int octalNumber = 0340;
    printf("This is octalNumber = %o\n",octalNumber);
    printf("This is decimal format of octal number = %d\n",octalNumber);

    // binary number %b
    int binayNumber = 0b11101;
    printf("This is binaryNumber = %d\n",binayNumber);

    // hexadecimal number %hx
    int hexadecimalNumber = 0xff;
    printf("This is hexadecimalNumber = %x\n",hexadecimalNumber);
    printf("This is format hexadecimalNumber = %d\n",hexadecimalNumber);

    return 0;
}