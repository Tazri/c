#include <stdio.h>

int main(){
    printf("Please tell me how many value you store ? : ");
    int array_size;
    scanf("%d",&array_size);
    int numbers[array_size];
    printf("\n>>>> Store Value in array <<<<\n\n");
    for(int i =0; i < array_size;i++){
        printf("\nnumbers[%d] = ",i);
        scanf("%d",&numbers[i]);
    }
    printf("\n\n>>>> Finish Store value in array <<<<\n");

    // printing array element
    printf(">>>Your array = ");
    for(int i = 0; i < array_size;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n\n");
    //reversing array
    for(int i = 0,j = array_size-1; i < array_size/2;i++,j--){
        int temp = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = temp;
    }

    printf(">>> Reversing array = ");
    for(int i = 0 ; i < array_size;i++){
        printf("%d ",numbers[i]);
    }


    return 0;
}