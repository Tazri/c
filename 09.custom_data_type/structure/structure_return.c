#include <stdio.h>
#include <string.h>

// create structure
struct Person {
    char name[20];
    int roll;
};

// function prototype
struct Person add_hello(struct Person);
struct Person * add_hi(struct Person *);

int main(void){
    // create a person
    struct Person tazri;
    
    // define value
    strcpy(tazri.name,"Tazri");
    tazri.roll = 21;

    // print tazri
    printf("\n===> Tazri <===\n");
    printf("Name : %s\n",tazri.name);
    printf("roll : %d\n",tazri.roll);

    // use add_hello function
    struct Person add_hello_tazri = add_hello(tazri);
    
    // print hello world
    printf("\n===> add_hello_tazri <===\n");
    printf("add_hello_tazri.name = %s\n",add_hello_tazri.name);
    printf("add_hello_tazri.roll = %d\n",add_hello_tazri.roll);

    // print tazri
    printf("\n===> Tazri <===\n");
    printf("Name : %s\n",tazri.name);
    printf("roll : %d\n",tazri.roll);

    // use add_hi funciton
    struct Person * hi_return_value = add_hi(&tazri);

    printf("\n===> hi_return_value <====\n");
    printf("hi_return_value->name = %s\n",hi_return_value->name);
    printf("hi_return_value->roll = %d\n",hi_return_value->roll);

    // print tazri
    printf("\n===> Tazri <===\n");
    printf("Name : %s\n",tazri.name);
    printf("roll : %d\n",tazri.roll);

    printf("\n\n");
    return 0;
}

// add_hello
struct Person add_hello(struct Person person){
    char name[20] = "Hello, ";

    strcat(name,person.name);
    strcpy(person.name,name);

    return person;
}

// add_hi
struct Person * add_hi(struct Person *person){
    char name[20] = "(pointer) Hi, ";
    strcat(name,person->name);
    strcpy(person->name,name);

    return person;
}