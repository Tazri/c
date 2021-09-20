#include <stdio.h>

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
};

int main(void){
    // create tazri person
    struct Person tazri;

    // create focasa
    struct Person focasa;

    // create pointer
    struct Person* pointer_tazri = &tazri;

    // print size of structure
    printf("\n===> Size of Date and Person Structure <===\n");
    printf("sizeof(Person) = %ld\n",sizeof(struct Person));
    printf("sizeof(Date) = %ld",sizeof(struct Date));

    // print structure address
    printf("\n===> structure variable address <===\n\n");
    printf("&tazri = %x\n",&tazri);
    printf("pointer_tazri = %x\n",pointer_tazri);
    printf("focasa = %x\n",&focasa);

    printf("\n\n");
    return 0;
}