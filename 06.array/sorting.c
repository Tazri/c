#include <stdio.h>

int main(void){
    int element_number;

    printf("How many number you enter : ");
    scanf("%d",&element_number);

    int numbers[element_number];

    printf("\n\n>>>> Stroing Number inside the array <<<< \n\n");
    for (int i = 0; i < element_number; i++)
    {
        printf("index[%d] = ",i);
        scanf("%d",&numbers[i]);
    }
    
    int i ,j,temp;   

    printf("\n\n>>> Result <<< \n\n");

    // reverse array
    for(i =0,j=element_number - 1;i < element_number/2; i++,j--){
        temp = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = temp;
    } 


    printf("\n>>> Reverse order => ");
    for(i = 0; i < element_number;i++){
        printf("%d,",numbers[i]);
    }
    printf("\n\n");

    
    // assending sorting
    for(i = 0;i < element_number;i++){
        for(j=0;j<element_number;j++){
            if(numbers[i] < numbers[j]){
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    printf("\n>>> Assending order => ");
    for(i = 0; i < element_number;i++){
        printf("%d,",numbers[i]);
    }
    printf("\n\n");

    
    // dessending sorting
    for(i = 0;i < element_number;i++){
        for(j=0;j<element_number;j++){
            if(numbers[i] > numbers[j]){
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    printf("\n>>> dessending order => ");
    for(i = 0; i < element_number;i++){
        printf("%d,",numbers[i]);
    }
    printf("\n\n");

    return 0;
}