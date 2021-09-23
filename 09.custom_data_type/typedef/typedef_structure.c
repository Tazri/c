#include <stdio.h>
#include <string.h>

// change type
typedef char * string;
typedef int let;

// create structure
typedef struct {
    string name;
    string subject;
    let roll;
} Person;

int main(void){
    // create person_one
    Person person_one;
    person_one.name = "Md Tazri";
    person_one.subject = "Science";
    person_one.roll = 30;

    printf("\n===> Person Details <===\n");
    printf("Name : %s\n",person_one.name);
    printf("Subject : %s\n",person_one.subject);
    printf("Roll : %d\n",person_one.roll);
    printf("===> Finish <===");


    printf("\n\n");
    return 0;
}