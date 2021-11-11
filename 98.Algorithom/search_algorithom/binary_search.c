#include <stdio.h>

int main(void){
    int array[15] = {1,4,5,7,11,15,17,21,24,28,31,35,37,55,41};
    int low = 0,high = 15,middle = (low+high)/2,n,is_found = 0;

    printf("Please Enter Your Number What You Search : ");
    scanf("%d",&n);

    while(low <= high){
        // first is number lessthen middle ?
        if(array[middle] > n){
            high = middle - 1;
            middle = (low+high)/2;
        }

        // if number greaterthen middle ?
        else if(array[middle] < n){
            low = middle + 1;
            middle = (low+high)/2;
        }

        else if(array[middle] == n){
            is_found = 1;
            break;
        }
    }

    if(is_found == 1){
        printf("\n\n>>>> Number Is Found at Index : %d\n",middle);
    }else{
        printf("\n\n>>>> Number Is Not Found :(");
    }

    printf("\n--\n-\n>>>> Program Finish <<<<\n");
    return 0;
}