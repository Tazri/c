#include <stdio.h>
#include <string.h>

// create person structure
struct Person {
    char name[20];
    int roll;
    int (*add_pointer)(int,int);
};

// return a person
struct Person * return_person(void);
void print_person(struct Person *);
int sum(int a, int b);

int main(void){
    // create a person array
    struct Person * person_one;

    person_one = return_person();


    print_person(person_one);
    printf("person->add_pointer(5,5) = %d\n",person_one->add_pointer(5,5));

    printf("\n\n");
    return 0;
}

// return_person
struct Person * return_person(void){
    // create simple person
    static struct Person simple_person;
    simple_person.roll = 200;
    strcpy(simple_person.name,"Anonymous");
    simple_person.add_pointer = sum;

    return &simple_person;
}

int sum(int a,int b){
    return a+b;
}

// print_person
void print_person(struct Person * person){
    printf("\n===> Person %s <===\n",person->name);
    printf("Name : %s\n",person->name);
    printf("Roll : %d\n",person->roll);
    printf("===> Finish <===\n");
}