#include <stdio.h>

// we can use pointer for return array from function

// function prototype
// int * filter_even(int *array,int size);
// int even_size(int *array,int size);

// void main(){
//     int size,i,j,k;
//     printf("Please enter the array size = ");
//     scanf("%d",&size);

//     int numbers[size];

//     printf("\n\n>>>>>Enter the value<<<<<\n");
//     for(i = 0; i < size;i++){
//         printf("numbers[%d] = ",i);
//         scanf("%d",&numbers[i]);
//     }

//     printf("\n\n>>>> Your array is  <<<<\n");
//     printf("[");
//     for( j = 0; j < size;j++){
//         printf(" %d ",numbers[j]);
//     }
//     printf("]\n");

//     int *even_array = filter_even(&numbers,size);
//     int total_even = even_size(&numbers,size);
//     printf("total_even = %d",total_even);

//     printf("\n\n>>>>> filter even array <<<<<\n");
//     printf("[");
//     for(k = 0; k < total_even;k++){
//         printf("%d",*(even_array+k));
//     }
//     printf("]\n");

//     printf("\n");
// }


// // function filter even
// int * filter_even(int *array,int size){
//     // find out how many even number exists
//     int total_even = even_size(&array,size);
//     int i,j;
    
//     // create even array
//     int even_numbers[total_even];

//     for(i = 0,j=0; i < size; i++ ){
//         if(array[i] % 2 == 0){
//             even_numbers[j] = array[i];
//             j++;
//         }
//     }

//     printf("\n\n//from filter//\n");
//     for(i = 0; i < total_even; i++){
//         printf(" %d ",even_numbers[i]);
//     }
//     printf("\n// from filter // \n\n");

//     // return the even array
//     return (even_numbers);
// }

// // function even size
// int even_size(int *array,int size){
//     int total_even = 0;
//     int i;
//     for(i = 0;i < size;i++){
//         if(array[i]%2 == 0){
//             total_even++;
//         }
//     }

//     return total_even;
// }


// function prototype
int * give_array();


void main(){
    int *number = give_array();

    for(int i = 0; i < 4; i++){
        printf(" %d ",number[i]);
    }

    printf("\n\n");

}

// give array function
int * give_array(){
    static int numbers[4] = {1,2,3,4};
    return numbers;
}