#include <stdio.h>

int main(){
    int number = 7;
    char charecter = 'T';
    float float_number = 3.23;

    void * void_number_pointer = &number;
    void * void_charecter_pointer = &charecter;
    void * float_number_void_pointer = &float_number;

    printf("*(int *)void_number_pointer = %d\n",*(int *)void_number_pointer);
    printf("*(char *)void_charecter_pointer = %c\n",*(char *)void_charecter_pointer);
    printf("*(float *)float_number_void_pointer = %0.2lf\n",*(float *)float_number_void_pointer);

    printf("\n\n");
    return 0;
}