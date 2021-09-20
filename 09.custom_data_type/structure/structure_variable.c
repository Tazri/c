#include <stdio.h>
#include <string.h>

struct Date {
    int year;
    int month;
    int date;
};

struct Person
{
    char name[20];
    int age;
    char grade;
    struct Date birth;
};

// function prototype
void printPerson(struct Person);

int main(void){
    // create tazri person
    struct Person tazri;
    tazri.age = 18;
    tazri.grade = 'B';
    strcpy(tazri.name,"Md Tazri");
    tazri.birth.date = 10;
    tazri.birth.month = 2;
    tazri.birth.year = 2003;

    // create focasa
    struct Person focasa = {
        "Md Focasa",
        21,
        'S',
        {
            2000,
            1,
            23
        }
    };

    // create pointer
    struct Person* pointer_tazri = &tazri;

    // print detail of persons
    printf("\n==> Details <==\n");
    printPerson(tazri);
    printPerson(focasa);

    printf("\n\n");
    return 0;
}

// printPerson
void printPerson(struct Person person){
    // print person
    printf("\n===> Person %s <===\n",person.name);
    printf("Name : %s\n",person.name);
    printf("Grade : %c\n",person.grade);
    printf("Age : %d\n",person.age);
    printf("Birth Date : %d/%d/%d\n",person.birth.date,person.birth.month,person.birth.year);
    printf("===> Finish Details <===\n");
}