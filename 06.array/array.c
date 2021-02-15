#include <stdio.h>

int main(void){
    int number;
    printf("How many number you store : ");
    scanf("%d",&number);
    printf("\n\n>>> Store all number in the array <<<\n\n");

    int numberArray[number];

    for(int i = 0; i < number; i++){
        printf("\n%d is = ",i+1);
        scanf("%d",&numberArray[i]);
        printf("\n");
    };

    printf("\n>>> Finish Store the number in the array <<< \n\n");
    printf("\n\n>>> Result <<< \n\n");
    int sum = 0,avg,max = numberArray[0];
    for(int j = 0;j < number;j++){
        sum += numberArray[j];
        if(max < numberArray[j]){
            max = numberArray[j];
        }
    }
    
    printf("\nThs sum is =  %d\n",sum);
    printf("The average is = %d\n",sum/number);
    printf("The max number is = %d\n\n\n",max);

    return 0;
}