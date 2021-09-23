#include <stdio.h>
#include <string.h>

union Create_union{
    int position;
    char name[20];
};

// funciton prototype
void print_union(char * name,union Create_union);
void print_union_pointer(union Create_union *);

int main(void){
    // create union variable and pointer
    union Create_union one,two;
    union Create_union * union_pointer;

    // one
    strcpy(one.name,"Position X");
    one.position = 10;

    // two
    strcpy(two.name,"Position Y");
    two.position = 20;

    // point one
    union_pointer = &one;

    print_union("One",one);
    print_union("Two",two);

    strcpy(one.name,"Position one X");
    print_union("One",one);

    print_union_pointer(union_pointer);

}

// print union
void print_union(char * name,union Create_union sample){
    printf("\n===> print %s <===\n",name);
    printf("Name : %s\n",sample.name);
    printf("Position : %d\n",sample.position);
    printf("===> Finish <===\n");
}

// print_union_pointer
void print_union_pointer(union Create_union * sample){
    printf("\n===> print Pointer <===\n");
    printf("Name : %s\n",sample->name);
    printf("Position : %d\n",sample->position);
    printf("===> Finish <===\n");
}