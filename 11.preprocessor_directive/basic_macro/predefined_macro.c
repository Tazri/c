#include <stdio.h>

int main(void){
    printf(">>>> __Date__ : %s\n",__DATE__);
    printf(">>>> __TIME__ : %s\n",__TIME__);
    printf(">>>> __FILE__ : %s\n",__FILE__);
    printf(">>>> __LINE__ : %d\n",__LINE__);
    printf(">>>> __STDC__ : %d\n",__STDC__);
    

    // print finish program
    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}