#include <stdio.h>
// include time holder to analyse time
#include <time.h>

int main(void){
    // create clock t type variable wich define in time h folder.
    clock_t start_time,end_time;
    double time_elapsed;

    /**
     * store start time in start_time variable
     * call clock return current time as clock_t type.
     * clock_t data type define in time.h folder.
     * 
     * */
    start_time = clock();

    // execute any type of program
    int sum;
    for(int i = 0; i < 1000000; i++){
        sum+=i;
    }

    printf(">>>> The sum is : %d\n\n",sum);

    // store current time in end_time variable
    end_time = clock();

    // calculate total time elapsed for whole program
    time_elapsed = (double) (end_time-start_time) / CLOCKS_PER_SEC;

    // print time_elapsed
    printf("\n--\n-\n>>>> Whole Program Finish. Need To Time : %lf <<<<\n",time_elapsed);

    return 0;
}