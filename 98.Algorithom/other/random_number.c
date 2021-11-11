#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    // variable for calculate program execute time
    clock_t start_time,end_time;
    double time_elapsed;
    start_time = clock();

    // create random number by rand function
    
    /**
     * Way one
     * 
     * set seed for random number
     * in that case we set seed clock();
     * seed set something which is dynamic like clock, cpu speed and time.
     * 
     * */
    // srand((unsigned)clock());
    // printf(">>>> Random Number : %d\n\n",rand());


    /**
     * Way two
     * 
     * set seed for random number
     * in this way we use time function
     * 
     * */
    time_t t;
    srand((unsigned) time(&t));
    printf(">>>> Random Number %d\n\n",rand());

    

    // finish the program
    end_time = clock();
    time_elapsed = (double) (end_time - start_time) / CLOCKS_PER_SEC;

    printf("\n--\n-\n");
    printf(">>>> TIME : %lf\n",time_elapsed);
    printf(">>>> Program Finish <<<<\n");
    return 0;
}