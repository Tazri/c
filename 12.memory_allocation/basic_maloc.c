#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// malloc
// prototype : void * malloc(byte_size)
// header file <stdlib.h>

// custom data type
typedef struct
{
    char name[30];
    int age : 15
} Person;

int main(void){
    // alocate int type date
    int *number_one_ptr = (int *) malloc(sizeof(int));

    *number_one_ptr = 100;

    printf(">>>> number_one_ptr = %x\n",number_one_ptr);
    printf(">>>> *number_one_ptr = %d\n",*number_one_ptr);

    // alocate struct type data
    Person *person_list = (Person *) malloc(sizeof(Person)*2);

    // set person one int list
    strcpy(person_list->name,"Md Tazri");
    person_list->age = 30;

    strcpy((person_list+1)->name,"Focasa");
    (person_list+1)->age = 22;

    for(int i = 0; i < 2; i++){
        printf("\n>>>> Person %d Details <<<<\n",i+1);
        printf(">>>> Name : %s\n",(person_list+i)->name);
        printf(">>>> Age : %d\n",(person_list+i)->age);
        printf(">>>> Finish <<<<\n");
    }

    // print finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}