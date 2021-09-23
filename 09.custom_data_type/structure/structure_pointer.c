#include <stdio.h>
#include <string.h>

// create person structure
struct Person {
    char name[30];
    int roll;
};

int main(void){
    // create struct variable
    struct Person tazri;
    strcpy(tazri.name,"Md Tazri");
    tazri.roll = 20;

    // person pointer
    struct Person * person_pointer;
    person_pointer = &tazri;

    // change variable by strucuter pointer
    person_pointer->roll = 10;

    printf("===> Print Details <===\n");
    printf("person_pointer->name = %s\n",person_pointer->name);
    printf("person_pointer->roll = %d\n",person_pointer->roll);
    printf("(*person_pointer).roll = %d\n",(*person_pointer).roll);

    printf("\n\n");

    return 0;
}