#include <stdio.h>
#include <string.h>

// create structure
struct Person {
    char name[30];
    int age;
};

// function prototype
void hello(struct Person);

int main(void){
    int number_of_person;

    printf("How many person you create ? = ");
    scanf("%d",&number_of_person);

    // create person_array
    struct Person list_of_person[number_of_person];


    // create person
    for(int i = 0; i < number_of_person; i++){
        // input person details
        struct Person person;
        char name[30];
        int age;

        printf("\n===> Input Details Of Person %d <===\n",i+1);
        printf("Name = ");
        scanf("%s",name);
        printf("Age = ");
        scanf("%d",&age);

        // create person
        strcpy(person.name,name);
        person.age = age;

        // push in list_of_person
        list_of_person[i] = person;
    }

    // hello all person
    printf("\n\n===> Greeting <===\n");

    for(int i = 0; i < number_of_person; i++){
        // hello person
        hello(list_of_person[i]);
    }

    printf("\n\n");
    return 0;
}

// hello function
void hello(struct Person person){
    printf("\n==> Hello! %d year old %s!\n\n",person.age,person.name);
}