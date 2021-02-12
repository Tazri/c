#include <stdio.h>

int main(void){
    // there are six type of bitwise operator in c
    // &
    // |
    // ^
    // ~
    // >>
    // <<

    // & operator in c
    /**
     * 0010110
     * 0010100
     * 0010100
    */

   printf("33 & 32 = %d\n",33&32);
   

   // | or operator
   /**
    * 0010110
    * 0010101
    * 0010111
   */
    printf("33 | 32 = %d\n",33|32);

    // ^ xor operator
    /**
     * 01101110
     * 00101011
     * 01000101
     * */ 

    printf("33 ^ 32 = %d\n",33^32);

    // ~ compliment operator
    /**
     * 0011011
     * 1100100
    */

   printf("~33 = %d\n",~33);

   // >> rightshift operator

   printf("33 >> 3 = %d\n",33 >> 3);

   // << leftshift operator

   printf("33 << 3 = %d\n",33 << 3);
    return 0;
}