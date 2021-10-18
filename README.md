[![Github](./asset/badge/github.svg)](https://github.com/Tazri) ![Ansi C](./asset/badge/c.svg) ![Crimson](./asset/badge/c-crimson.svg)

# C Programming Language

This is my simple and small documentation on c for me. I create this documentation on ansi standard c programming language.

## **_Table of Content_**

- [Starting With C](#Starting-With-C)
- [Variable](#Variable)
- [DataType](#DataType)
- [Constants](#Constants)
- [Format Specifier](#Format-Specifier)
- [Operator](#Operator)
- [if Statement](#if-statement)
- [switch Statement](#switch-Statement)
- [for-loop](#for-loop)
- [while-loop](#while-loop)
- [do-while-loop](#do-while-loop)
- [goto-statement](#goto-statement)
- [function](#Function)
- [Array](#Array)
- [Pointer](#Pointer)
- [String](#String)
- [Custom Data Type](#Custom_Data_Type)
  - [structure](#structure)
  - [union](#union)
  - [enumeration](#enumeration)
  - [typedef](#typedef)
  - [bitfield](#bitfield)
- [Data_File](#Data_File)
  - [Open_and_Close_File](#Open_and_Close_File)
  - [i/o_operation](#i/o_operation)
  - [CRUD_Operation](#CRUD_Operation)
    - [Create](#create)
    - [Read](#read)
    - [Update](#update)
    - [Delete](#delete)
    - [Random_Access](#random_Access)
    - [Disk_Flush](#Disk_Flush)
- [Command Line Arguments](#command_line_arguments)

# Starting-With-C

**basic c program**

```c
#include <stido.h>

int main(){
    printf("Hello, World!");
    return 0;
}
```

**Another Basic C Program**

```c
#include <stdio.h>

void main(void){
    printf("Hello, World!");
}
```

These program will print hello world in console. let see what I do in this program:

First I include stdio.h header file in program. stdio mean _"standard Input Output"_. Then create main function. In c program start in main function. If main return in then I return 0 in last. and it is void. In that case there is no need to return something. Printf mean print function. This function work for something print in console. semicolon work like a full stop. compiler understand the line is finish.

C is **_Case Sensitive Language_**.

### printf()

This function use for print something in console.

### scanf()

This function use for input something from user.

### comment

"**//**" it user for single line comment
"/\* \*/" user fo multi line comment in c

**_example_**

```c
#include <stdio.h>

int main(){
    // this is single line comment
    /* this is multi line comment
    in c */
    return 0;
}
```

# Variable

variable is name of memory location. it store variouse of data in c.

**_Example of Variable_**

```c
#include <stdio.h>

void main(void){
    int a;
    a = 3;

    printf("a %d\n",a);
}
```

in this code. a is a variable. It store 3. 3 is integer type data.

variable declaration

    data_type variable_name = value;

# DataType

basically 4 type of data in c.

1. char
1. int
1. float
1. double

## Modifier

Modifier for modifie the variable type. Here is keyword for modifier

- signed
- unsigned
- long
- short

# Constants

There 2 way to declare constant in c.

```c
#include <stdio.h>

// declare constants with #
#define PI 3.16

int main(){
    // declare constants with const
    const float PI_ANOTHER = 3.16;
    return 0;
}

```

# Format-Specifier

Format Specifier use for print data in console.

### Usefull format specifier

| specifier | use                                     |
| --------- | --------------------------------------- |
| %c        | single character print                  |
| %d        | integer value display                   |
| %f        | floating point number display           |
| %o        | octal string display                    |
| %s        | null terminated character string print. |
| %u        | unsigned integer display                |
| %x        | hexadecimal integer display             |
| %X        | hexadecimal integer (A....F) display    |

# Operator

there are six type of operator in c.

1. Arithmatic Operator
1. Relational Operator
1. Logical Operator
1. Bitwise Operator
1. Assignment Operator
1. Selection Operators

## Arithmatic Operator

| operator | name           |
| -------- | -------------- |
| \+       | Addition       |
| \-       | Subtaction     |
| \*       | Multiplication |
| /        | Division       |
| %        | Modulus        |

## Relational Operators

| operator | name                  |
| -------- | --------------------- |
| \>       | greater than          |
| \<       | less than             |
| \>=      | greater than or equal |
| \<=      | less than or equal    |
| !=       | not equal             |
| ==       | equal                 |

## Logical Operators

| operator | name |
| -------- | ---- |
| !        | NOT  |
| &&       | AND  |
| \|\|     | oR   |

## Bitwise Operators

| operator | name        |
| -------- | ----------- |
| ~        | complement  |
| &        | AND         |
| \|       | OR          |
| ^        | XOR         |
| <<       | left shift  |
| \>>      | right shift |

## Asignment Operators

| operator | name                    |
| -------- | ----------------------- |
| =        | assignment              |
| \++      | increament              |
| \--      | dcreament               |
| \+=      | add assign              |
| \-=      | subtract assign         |
| \*=      | multiply assign         |
| \/=      | divide assign           |
| \%=      | take modulus and assign |
| \|=      | OR and assign           |
| \&=      | AND and assign          |
| \^=      | XOR assign              |
| \<<=     | left shift and assign   |
| \>>=     | right shift and assign  |

## Selection Operators

| operator | name         |
| -------- | ------------ |
| ?:       | if-then-else |

# if-statement

Basic structure of if else statement

    if(condition){
        code;
    }else if(condition){
        code;
    }else if(condition){
        code;
    }else{
        code;
    }

**_Example of if else statement: _**

```c
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a < 10){
        printf("a is less than 10");
    }else if(a < 20){
        printf("a is less than 20");
    }else{
        printf("a is greater than 20");
    }
    return 0;
}
```

# switch-Statement

Basic structure of switch statement

    switch(expression){
        case constant_1 :
            statement_1;
            break;
        case constant_2 :
            statement_2;
            break;
        case constant_3 :
            statement_3;
            break;
        ....
        case constant_n :
            statement_n;
            break;
        default :
            default_statement;
            break;
    }

**_Example of switch statement_**

```c
#include <stdio.h>

int main(void){
    short number;
    printf("please enter a number at 1 -8 : ");
    scanf("%hd",&number);

    // start switch statement.

    switch(number){
        case 1:
        case 2:
        case 3:
        case 4:
            printf("\n>>>Your number is under the 4 or 4");
            break;
        case 5:
        case 6:
        case 7:
            printf("\n>>>Your number is over the 4 and under the 8.");
            break;
        case 8:
            printf("\n>>>Your number is 8.");
            break;
        default:
            printf("\n>>>Your number either over the 8 or under the 1.");
            break;
    }

    printf("\n\n");
    return 0;
}
```

# for-loop

basic structure of for-loop

    for(initialize; condition; increment){
        statement;
    }

**_Example of for loop_**

```c
#include <stdio.h>

int main(void){
    int number;
    printf("Please enter your number : ");
    scanf("%d",&number);
    printf("\n\n>>>> Your full pyramid <<<<\n\n");

    for(int i = 0 ; i < number; i++){
        for(int j = i + 1 ; j < number;j++){
            printf(" ");
        }

        for(int k = 0; k < (i*2) -1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

# while-loop

basic structure of while loop

    while(condition){
        statement;
    }

**_Example of while loop_**

```c
#include <stdio.h>

int main(void){
    char name[20];
    int i = 0;
    printf("Please Enter Your number : ");
    fgets(name,20,stdin);

    while(name[i]){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        i++;
    }

    printf("\n\n>>>> %s <<<<\n\n",name);

    printf("\nlast element %c\n",name[i]);

    return 0;
}
```

# do-while-loop

basic structure of do while loop

    do{
        statement
    }while(condition);

# goto-statement

basic structure of goto statement

    goto label;
    ....
    other statement(s);
    label:
    ....

**_Example of goto statement_**

```c
#include <stdio.h>

void main(void){
    short int command;

    // create lebal
    start_here :
    printf("Please Enter Your Command : ");
    scanf("%hd",&command);

    // check command
    if(command == 0){
        goto end_here;
    }else{
        goto start_here;
    }

    // end_here lebal
    end_here :
    printf("\n\nYour Program Is Finish\n");
}
```

# Function

Basic funtion structure in c.

    return_data_type function_name(peramater){
        function defination
        return return_something
    }

**_Example of function in c_**

```c
// say_goodmornning() function
void say_goodmorning(){
    printf("Good Mornning, World!\n");
}
```

# Array

Basic Array structure in c.

    data_type arrayName[size] = {e_one,e_two};

Example of Array

```c
#include <stdio.h>

int main(){
    // One Dimentional Array
    int numbers[5] = {4,3,2,4,3};

    // One Dimentional Array Without Define size
    int numbers_two[] = {4,3,2,3,4};

    // Two Dimentional Array
    int array_of_numbers = {{3,3},{3,2}};

    // access element of array
    numbers[2];
    array_of_numbers[0][2]

    return 0;
}
```

\***_Array name work like pointer but it constant_**

# Pointer

Basic Structure of Pointer

    data_type *Poiner_name = &Pointed_variable;

Example of Pointer

```c
#include <stdio.h>

void print(char n[1000]);

void main(){
    int number;
    int *pointer_of_number = NULL;
    int **pointer_of_pointer = NULL;

    printf("Please enter the number = ");
    scanf("%d",&number);

    pointer_of_number = &number;
    pointer_of_pointer = &pointer_of_number;

    printf("\n\n======>0<======\n\n");
    printf("You enter number is %d \n",number);
    printf("This number address is %x \n",&number);

    print("now it point it");
    printf("pointer_of_number = %x\n",pointer_of_number);
    printf("pointer_of_number value = %d\n",*pointer_of_number);
    printf("&pointer_of_number = %x\n",&pointer_of_number);

    print("\nnow see the pointer of pointer\n");

    printf("pointer_of_pointer = %x\n",pointer_of_pointer);
    printf("*pointer_of_pointer value is = %x\n",*pointer_of_pointer);
    printf("**pointer_of_pointer value is = %d\n",**pointer_of_pointer);

    printf("\n");
}

void print(char n[100]){
    printf("%s\n",n);
}
```

### Null Pointer

if pointer point the null it call null pointer. In that case it store 0 instead of any adress.

```c
#include <stdio.h>

int main(){
    int number = 23;
    int * null_pointer = NULL;

    printf("null_pointer = %x\n",null_pointer);
    null_pointer = &number;
    printf("\nNuw null_pointer point number\n");
    printf("null_pointer = %x\n",null_pointer);
    printf("*null_pointer = %d\n",*null_pointer);

    return 0;
}
```

### void pointer

which pointer can point any datatype of variable without casting it call void pointer.

basic staructure of void pointer

    void pointer_name = &variable_name;

access the value of void ponter in that case use casting.

Example of Void Pointer

```c
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
```

### const pointer

basice structure of const pointer

    // value constant
    const data_type * pointer_name = &variable;

    // referenece constant
    data * const pointer_name = &variable;

    // value and referenece
    const data * const pointer_name = &variable;

Example :

```c
#include <stdio.h>

int main(){
    int number = 7;
    int number_two = 100;

    const int * const_int_pointer = &number;
    int * const int_const_pointer = &number;
    const int * const const_int_const_pointer = &number;

    number = 10;

    *int_const_pointer = 32;
    const_int_pointer = &number_two;

    printf("const_int_pointer = %x\n",const_int_pointer);
    printf("*const_int_pointer = %d\n",*const_int_pointer);


    printf("int_const_pointer = %x\n",int_const_pointer);
    printf("int_const_pointer = %d\n",*int_const_pointer);

    printf("const_int_const_pointer = %x\n",const_int_const_pointer);
    printf("const_int_const_pointer = %d\n",*const_int_const_pointer);

    printf("\n\n");

```

### function pointer

Basic structure of function pointer

    return_data_type (*pointer_name)(perameter_list);

Example

```c
#include <stdio.h>

// fuction prototype
int sum(int,int);
void print_hello(void);
int * return_array(void);

int main(){
    // create function pointer
    int (*pointer_sum)(int,int);
    void (*print_pointer)(void);
    int * (*array_pointer)(void);

    // function memory address
    printf("address of sum function sum = %x",sum);

    // store function in pointer
    pointer_sum = sum;
    print_pointer = print_hello;
    array_pointer = return_array;

    // call function by pointer
    (*print_pointer)();
    int result = (*pointer_sum)(29,23);
    int * array_address = (*array_pointer)();

    printf("Result = %d\n",result);
    printf("print array_adress = %x\n",array_address);
    printf("print secound element of array = %d\n",*(array_address+1));

    printf("\n\n");
    return 0;
}

// sum
int sum(int a,int b){
    printf("a + b = %d\n",a+b);
    return a+b;
}

// print_hello
void print_hello(){
    printf("\nHello, World!\n");
}


// return_array
int * return_array(){
    static int numbers[] = {3,200,2,3,4,2};
    return numbers;
}
```

### function pointer as perameter

Basic structure

    return_data_type function_name(return_data_type (*pointer_name)(perameter_list));

Example:

```c
#include <stdio.h>

// function prototype
int getResult(int,int,int (*)(int,int));
int sum(int,int);

int main(void){
    int a,b;
    printf("Please Enter a = ");
    scanf("%d",&a);
    printf("\nPlease Enter b = ");
    scanf("%d",&b);

    int result = getResult(a,b,sum);

    printf("\n\n===> Result = %d\n",result);

    printf("\n\n");
    return 0;
}

int getResult(int number_one,int number_two,int (*function_pointer)(int,int)){
    return (*function_pointer)(number_one,number_two);
}

int sum(int number_one,int number_two){
    return number_one + number_two;
};
```

# String

Decleare string in c

    char string_one[] = "name";
    char * string_two = "name";

Example :

```c
char name_one[] = {'T','a','z','r','i','\0'};
char string_one[] = "name";
char * string_two = "name";
```

### output/input string function

| input     | output    |
| --------- | --------- |
| scanf()   | printf()  |
| gets()    | puts()    |
| getchar() | putchar() |

### String.h

**_Important String Function_**
| Function Name | work |
| ------------- | ---- |
| strlen | return string length |
| strcat | string concatenation |
| strcpy | copy string |
| strcmp | compare two string |
| strstr | find string in string |

### convert string to number

string number convert need some function which exist in stdlib.h header folder

**_Function for convert string_**
| Function | Type |
| -------- | ---- |
| atof | float |
| atoi | int |
| atol | long int|
| strtod | double |
| strtol | long |

**_Example of Conver String to number :_**

```c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char number[20] = "323.32.343";

    printf("\n\n===> Convert Number <===\n");
    printf("Number : %s\n",number);
    printf("(float)atof = %f\n",atof(number));
    printf("(int)atoi = %d\n",atoi(number));
    printf("(long int)atol = %ld\n",atol(number));

    return 0;
}
```

# Custom_Data_Type

5 way to create new data type in c.

- structure
- bit-field
- union
- enumeration
- typedef

# Structure

Basic structure of structure in c :

### Define Structure

```
struct tag{
    structure_memeber_one;
    structure_memeber_two;
    structure_memeber_three;
    structure_memeber_four;
    - - - - - - - - - - -
    structure_memeber_n;
}
```

Example of Create Structure and create structure variable :

```c
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
```

### Structure Variable

Basic create structure variable

    struct structure variable_name;
    struct structure variable_name_one, variable_name_two;
    struct structure {
        member_one,
        member_two,
        - - - - - -
        member_n
    } variable_name;

Assign value in structure variable

    // by array notation
    struct structure variable_name = {
        member_value_one,
        member_value_two,
        member_value_three,
        - - - - - - - - - -
        memeber_value_n
    };

    // by memeber notation
    struct_variable.member_one = value;
    struct_variable.member_two = value;
    struct_variable.member_three = value;
    struct_variable.member_n = value;

Example :

```c
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
```

### Array of Structure

Basic structure

    struct structure_name array_name[size];

Example :

```c
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
```

### Structure Pointer

Basic of structure pointer

    struct Structure * pointer_name;
    pointer_name = &structure_variable;

    // access member from struct pointer
    pointer_name->member;

    // member notation
    (*pointer_name).member;

**_Example_**

```c
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
```

### structure return

Basic structure of function which are return structure.

    structure type funciton_name(perameter){
        - - - - - - - -
        - - - - - - - -
        return structure
    }

Not only structure but also structure ponter.

    structure type * function_name(perameter){
        - - - - - - - -
        - - - - - - - -
        return &structure
    }

Example :

```c
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
```

### Self Referential Structure

Basic structure

    struct structure_name{
        memebers....;
        ...... ;
        .......;
        struct structure_name * name;
    }

**_Example :_**

```c
#include <stdio.h>
#include <string.h>

// create simple node type structure
struct node_type_struct{
    char type[10];
    int x;
    int y;
    struct node_type_struct * next;
};

// print part
void print_part(struct node_type_struct *);

int main(void){
    // create head, body and tail structure
    struct node_type_struct head, body, tail;

    // head
    head.x = 10;
    head.y = 10;
    head.next = &body;
    strcpy(head.type,"Head");

    // body
    body.x = 50;
    body.y = 50;
    body.next = &tail;
    strcpy(body.type,"Body");

    // tail
    tail.x = 100;
    tail.y = 100;
    tail.next = &head;
    strcpy(tail.type,"Tail");

    // print head
    print_part(&head);
    print_part(head.next);
    print_part(head.next->next);

    // change head value
    head.next->next->next->x = 3000;
    print_part(head.next->next->next);

    printf("\n");
    return 0;
}

// print_part
void print_part(struct node_type_struct * part){
    printf("\n===> Print %s <===\n",part->type);
    printf("Name : %s\n",part->type);
    printf("Position X : %d\n",part->x);
    printf("Position Y : %d\n",part->y);
    printf("===> Finish <===\n");
    printf("\n");
}
```

# Union

It look like structure just it share only large member size with other or nothing else and also it declere system is little bit different. use "union" keyword instead of "structure" keyword.

**_Example :_**

```c
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
```

**_Result :_**

    ===> print One <===
    Name :

    Position : 10
    ===> Finish <===

    ===> print Two <===
    Name :
    Position : 20
    ===> Finish <===

    ===> print One <===
    Name : Position one X
    Position : 1769172816
    ===> Finish <===

    ===> print Pointer <===
    Name : Position one X
    Position : 1769172816
    ===> Finish <===

# enumeration

Basic structure of enumeration :

    enum tag {
        enumeration list or
        enum memeber (s);
    };

Declare enum variable:

    enum tag_name variable_name,variable_name_one;

Define enum variable value:

    enum_variable = enum_value;

**_Example of enumeration:_**

```c
#include <stdio.h>
#include <string.h>

// create enum type data
enum bool {false,true};

int main(void){
    enum bool is_hot_day;

    is_hot_day = true;

    if(is_hot_day){
        printf("===> Is hot day = true\n");
    }else{
        printf("===> Is hot day = false\n");
    }

    printf("\n===> print true and false value <=== \n");
    printf("true = %d\n",true);
    printf("false = %d\n",false);

    printf("\n");
    return 0;
}
```

**_Result :_**

    ===> Is hot day = true

    ===> print true and false value <===
    true = 1
    false = 0

# define enumeratin member value

Define enum memeber value :

    enum tag_name {
        memeber = value,
        memeber_one = value
        - - - - - - - -
    }

**_Example :_**

```c
#include <stdio.h>

enum month {
    Sep = 9,Oct,Nov,Dec,Jan=1,Feb,Mar,Apr
};

int main(void){
    enum month this_month = Oct;
    enum month next_month = Feb;
    int number = Oct;

    printf("This month %d\n",this_month);
    printf("Next month %d\n",next_month);
    printf("number = %d\n",number);

    printf("\n\n");
    return 0;
}
```

**_Result :_**

```
This month 10
Next month 2
number = 10

```

**_Note :_** If enum 2 memeber or 3 member or multiple memeber value is same, that not problem. program can not show the error.

# typedef

Basic structure of typedef

    typedef data_type new_name;

**_Basic Example:_**

```c
#include <stdio.h>

// create sum typedef
typedef enum {false,true} bool;
typedef char letter;
typedef letter * string;
typedef letter str[30];

int main(void){
    bool is_hotday = true;
    string name = "Md Tazri";
    str my_friend_name = "Focasa";

    if(is_hotday == true){
        printf("Now this is hot day.\n");
    }else{
        printf("This is not hot day.\n");
    }

    printf("My Name is : %s",name);
    printf("\nMy Friend Name is : %s",my_friend_name);

    printf("\n");
    return 0;
}
```

**_Result:_**

```
Now this is hot day.
My Name is : Md Tazri
My Friend Name is : Focasa

```

**_Example With Structure:_**

```c
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
```

**_Result :_**

```
===> Person Details <===
Name : Md Tazri
Subject : Science
Roll : 30
===> Finish <===

```

# bitfield

bitfield use to define structure or union member size.

    struct Struct_name{
        member_type memeber_name_1 : bit_size;
        member_type memeber_name_2 : bit_size;
        member_type memeber_name_3 : bit_size;
        - - - - - - - - - - - - -
        member_type memeber_name_n : bit_size;
    }

**_Example :_**

```c
#include <stdio.h>

// structure
typedef struct {
    unsigned day : 5;
    unsigned month : 4;
    unsigned year : 7;
} Date;

// function prototype
void print_date(Date);

int main(void){
    // create date
    Date today;

    today.day = 24;
    today.month = 9;
    today.year = 21;

    print_date(today);

    printf("\n\n");
    return 0;
}

// print_date
void print_date(Date date){
    printf("\n===> The day is %d/%d/%d\n",date.day,date.month,date.year);
}
```

**_Result :_**

```

===> The day is 24/9/21

```

# Data_File

FILE is a one kind of structure which define in stdio.h header folder.

### FILE structure

**_let see file struture :_**

```c
typedef struct
{
    int level ;
    unsigned flags;
    char fd;
    unsigned char hold;
    int bsize;
    unsigned char _FAR* buffer;
    unsigned char _FAR* curp;
    unsigned istemp;
    short token;
} FILE;
```

Then create FILE pointer.The use this pointer the read write the file. also create the file.

### Open_and_Close_File

There are two fuction to open and close the file.

| function | work            |
| -------- | --------------- |
| fopen    | open the file   |
| fclose   | close the file  |
| remove   | delete the file |

#### fopen

This function use for open the file and it return FILE pointer

**_fopen structure_**

    fopen("file_path_with_extention","mode");

There are 3 basic kind of mode. and 3 advance level mode which defend on compailer.

| mode | work                                            |
| ---- | ----------------------------------------------- |
| "w"  | create file and write on file                   |
| "r"  | read file. if file can not exist it return null |
| "a"  | append in last of file.                         |
| "w+" | write and read file                             |
| "r+" | write and read file                             |
| "a+" | append and read file                            |

#### fclose

This function use for close the file. If I can not close the file operating system automating close the file.

**_fclose structure_**

    fclose(file_pointer);

#### remove

This function use for delete file

    remove("file_name");

If file successfully delete it return 0 other then it return any positive or negitive number.

## i/o_operation

Here the functions which commonly use for i/o operatin on file.

| write   | read   |
| ------- | ------ |
| putc    | getc   |
| fputs   | fgets  |
| fprintf | fscanf |
| fwrite  | fread  |

## CRUD_Operation

CRUD meam Create, Read, Update and Delete.This operation mean create, delete, read, update and delete the file.

## Create

Basically fopen function use to create file. also "w" or "w+" mode use in that case.

**_Example :_**

```c
#include <stdio.h>

typedef char string[100];

int main(void){
    // create file pointer
    FILE *file;
    string file_name;

    // get file to open
    printf("\n>>>> Please Enter Your File Name : ");
    gets(file_name);

    // try to open the file in read mode
    file = fopen(file_name,"r");

    // if file dose not exist
    if(file == NULL){
        // print the messae is file dose not exist
        printf("\n>>>> File Dose not exist");
        printf("\n>>>> Do you want create file with this name ??");
        printf("\n>>>> yse(1), no(0)\n");
        printf("Command : ");

        // get user agree or not
        unsigned short isAgree;
        scanf("%hu",&isAgree);

        if(isAgree){
            // create the file and send the message
            file = fopen(file_name,"w");
            printf("\n\n>>>> File is Created Successfully!!");
            fclose(file);
        }else{
            printf("\n>>>> Program is Finished.");
        }
    }else{
        // alert the user file is open.
        printf(">>>>File is open.\nLoding......\n.....\n....\n...\n..\n.\n");

        // close the file again.
        fclose(file);
    }

    // extra line
    printf("\n\n");
    return 0;
}
```

## write

write functions use for something write inside the file.

#### putc

**_putc prototype_**

    putc("character",file_pointer);

**_Example :_**

```c
#include <stdio.h>

// create costum keyword
typedef char letter;
typedef letter string[50];
typedef FILE *Create_File;

int main(void){
    // create file and file property
    Create_File user_file;
    string file_name;

    // print message for command
    printf(">>>> Please Enter Your File Name With Extension : ");
    gets(file_name);

    // create the folder
    user_file = fopen(file_name,"w");

    // message to write something inside the file
    printf(">>>> Print Your Text or Message Inside the file : \n\n");

    // write something inside the file
    letter c;
    c = getchar();

    while (c != EOF)
    {
        putc(c,user_file);
        c = getchar();
    }

    printf(">>>> Write is complate <<<<");

    // print program finish message
    printf("--\n-\n>>>> Program is Finish <<<<\n");

    return 0;
}
```

#### fputs

**_fputs prototype_**

    fputs("line of string",file_pointer);

**_Example :_**

```c
#include <stdio.h>

int main(void){
    // create text file
    FILE * text_file = fopen("text.txt","w");
    char sentence[30];

    // write inside text
    printf("Please Inside write text for text file : ");
    gets(sentence);

    // write text inside the text.txt file
    fputs(sentence,text_file);

    // close the file
    fclose(text_file);

    // print program finish message
    printf("\n--\n-\n>>>> Program is finish <<<<\n");
    return 0;
}
```

#### fprintf

**_fprintf prototype_**

    fprintf(file_pointer,"strign with format specifier",.....variable for format specifier);

**_Example :_**

```c
#include <stdio.h>

int main(void){
    // create file pointer
    FILE * file;
    char file_name[] = "text.txt";

    file = fopen(file_name,"w");

    // write something inside the file
    fprintf(file,"This is %s and I am \n %d Year Old.","Md Tazri",18);

    // close the file
    fclose(file);

    // print finish program message
    printf("\n--\n-\n>>>> Finish The Program <<<<\n");
}
```

#### fwrite

fwrite function use for structure type data store in file.

**_fwrite prototype_**

    fwrite(
            structure, /* structure */
            size of structure, /* size of structure */
            1, /* # of element equals to 1 */
            file_pointer /* file pointer */
        );

**_Example :_**

```c
#include <stdio.h>

// create custom data type
typedef struct
{
   char name[10];
   char addreas[30];
   char phone[15];
} Create_User;
typedef char* string;

int main(void){
    // create user list
    Create_User user_list[4] = {
        "Md Tazri","Cumilla","032322234",
        "Focasa","Unknow","203042321",
        "Godzilla","Sea","00324230",
        "Knight Peory","Sky","0302923934"
    };

    // create user date file
    FILE * user_file;
    string file_name = "user.dat";

    // write to file
    user_file = fopen(file_name,"w");
    for(int i = 0;i < 4; i++){
        fwrite(
            &user_list[i], /* buffer pointer to user's i-th elm */
            sizeof(user_list[i]), /* size of elements */
            1, /* # of element equals to 1 */
            user_file /* file pointer */
        );
    }

    fclose(user_file);

    // finish message
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}
```

### read

Read function use for read text from file.

#### getc

This function use for read single character in file.

**_getc prototype_**

    getc(file_pointer)

**_Example :_**

```c
#include <stdio.h>

// create costum keyword
typedef char string[];
typedef FILE * create_file;
typedef char letter;

int main(void){
    // create file and open it
    create_file text_file;
    string file_name = "text.txt";

    text_file = fopen(file_name,"r");

    // create char variable
    letter c;

    while ( c != EOF)
    {
        printf("%c",c);
        c = getc(text_file);
    }


    // extra linek escape
    printf("\n>>>>> Finish The Program <<<<<\n\n");
    return 0;
}
```

#### fgets

Read line of string in file.

**_fgets prototype_**

    fgets(char */char [],size_of_char,file_pointer);

**_Example :_**

```c
#include <stdio.h>

// create costum data type
typedef char letter;
typedef letter string[];

int main(void){
    // create file
    FILE * text_file;
    string file_name = "text.txt";

    // open the file
    text_file = fopen(file_name,"r");

    // print everything inside the file
    letter text[40];
    fgets(text,30,text_file);

    printf(">>>> Inside the text file : \n\n%s\n",text);

    // printf finish message
    printf("--\n-\n>>>> Programm is finish <<<<\n");
    return 0;
}
```

#### fscanf

Read data like scanf functin line by line.

**_fscanf prototype_**

    fscanf(
        file_pointer,
        "string with format specifer",
        ...variable)

**_Example: _**

```c
#include <stdio.h>

int main(void){
    // create file
    FILE * text_file;
    char file_name[] = "text.txt";

    text_file = fopen(file_name,"r");

    // read the file
    char name[30];
    double number;
    char grade;

    fscanf(text_file,"%s %lf %c",name,&number,&grade);
    printf("\nname : %s\nnumber : %0.2lf\ngrade : %c",name,number,grade);



    // print end message
    printf("\n--\n-\n>>>> Program is Finish <<<<\n");
    return 0;
}
```

#### fread

This function use for read file which contains structure.

**_fread prototype_**

    fread(
            &structure, /* structure */
            sizeof(structure),
            1, /* # of element equals to 1 */
            file_pointer
        );

**_Example :_**

```c
#include <stdio.h>

// create custom data type
typedef struct
{
    char name[10];
    char addreas[30];
    char phone[15];
} Create_User;
typedef char * string;

int main(void){
    // create user
    Create_User common_user;

    // create file for read
    FILE * user_dat_file;
    string file_name = "user.dat";

    user_dat_file = fopen(file_name,"r");

    // read the file
    for(int i = 0; i < 4; i++){
        fread(
            &common_user, /* buffer pointer */
            sizeof(common_user), /* size of buffer */
            1, /* # of element equals to 1 */
            user_dat_file /* file pointer */
        );

        printf("\n>>>> Details %d <<<<\n",i);
        printf("Name : %s\n",common_user.name);
        printf("Addreas : %s\n",common_user.addreas);
        printf("Phone : %s\n",common_user.phone);
        printf(">>>> Finsh User %d <<<<\n",i);
    }

    // finish the program
    printf("\n--\n-\n>>>> Finish The Program <<<<\n");
    return 0;
}
```

## Update

update case we use "a" or "a+" mode in fopen.

**_Example :_**

```c
#include <stdio.h>

// function prototype
void message(char []);

int main(void){
    // create file pointer
    FILE * file = fopen("text.txt","a");

    if(file == NULL){
        message("File can't Open or Dose't Exist!");
    }else{
        fputs("\nThis line is appended\nbla bla bla",file);
    }

    return 0;
}

// message
void message(char m[]){
    printf("\n--\n-\n>>>> %s <<<<\n",m);
}
```

## Delete

use remove fuction for delete the file. It return 0 if file successfully delete other wise it's return any positive or negitive number.

**_Example :_**

```c
#include <stdio.h>

int main(){
    char * delete_file_name = "d.t";

    if(remove(delete_file_name) == 0){
        printf("\n--\n-\n>>>> File Delete Successfully <<<<\a\n");
    }else{
        printf("\n--\n-\n>>>> File can not delete or file not exist <<<<\a\n");
    }

    return 0;
}
```

## Random_Access

Basically random access on file mean write and read file any where. 3 type of function commonly use in that case.

| function name | function work                           |
| ------------- | --------------------------------------- |
| fseek         | set file pointer positiontion any where |
| ftell         | return current file pointer position    |
| rewind        | set file position in the begining       |

### fseek

This function use basically set file pointer position any where.

**_fseek prototype_**

    fseek(file_pointer,int index,int start);
    // index of character;
    // start mean starting point.
    // three type of start in here.
    // 0 - start
    // 1 - center
    // 2 - end

**_int index_**

use index of character. in here use L with integer. It first your code. like use 1L, 2L, 3L instead of use 1, 2, 3.

**_int start_**

In here can provide constant variable in start instead of number. 3 kind of constant variable.

| constant | value | position |
| -------- | ----- | -------- |
| SEEK_SET | 0     | start    |
| SEEK_CUR | 1     | center   |
| SEEK_END | 2     | end      |

**_Example :_**

```c
#include <stdio.h>

// create custom data type
typedef char string[];

int main(void){
    // create files
    FILE * fp;
    string file_name = "text.txt";

    // open the file for write;
    fp = fopen(file_name,"w");

    // write something inside the file
    string text = "HeLlo I am Md Tazri. Do You Know me";
    fputs(text,fp);
    fclose(fp);

    // open the file for read the file
    fp = fopen(file_name,"r");

    fseek(fp,3L,0);
    printf("chararcet = %c\n",getc(fp)); // l

    fseek(fp,-2L,2);
    printf("chararcet = %c\n",getc(fp)); // m

    fseek(fp,-4L,2);
    printf("chararcet = %c\n",getc(fp)); // w

    fseek(fp,2L,1);
    printf("chararcet = %c\n",getc(fp)); // w

    /*
        SEEK_SET 0 start position
        SEEK_CUR 1 current position
        SEEK_END 2 end position
    */

    fseek(fp,3L,SEEK_SET);
    printf("chararcet = %c\n",getc(fp)); // l

    fseek(fp,2L,SEEK_CUR);
    printf("chararcet = %c\n",getc(fp)); // I

    fseek(fp,-2L,SEEK_END);
    printf("chararcet = %c\n",getc(fp)); // m

    // finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}
```

### ftell

It get FILE pointer and return current position as integer.

### rewind

This funciton set position in start on file pointer.It get FILE pointer as parameter.

**_Example of ftell and rewind :_**

```c
#include <stdio.h>

// custom data type
typedef char letter;

int main(void){
    // create file pointer
    FILE * file;
    char file_name[30];

    printf(">>>> Please Enter Your File Name : ");
    gets(file_name);

    // create the file
    file = fopen(file_name,"w+");

    // write inside the file
    printf(">>>> Writing Started\n");
    printf(">>>> If writing is finsih please press ctrl + d to end ...\n\n");
    letter l;

    while ((l = getchar()) != EOF)
    {
        putc(l,file);
    }

    // analysing the file
    long long int total_character = ftell(file);
    printf("\n\n>>>> Analysing <<<<\n");
    printf("Total Character : %lld\n",total_character);
    fseek(file,-1L,SEEK_END);
    printf("The Last Character : %c\n",getc(file));
    rewind(file);
    printf("The First Character : %c\n",getc(file));

    // finish program
    printf("\n-\n--\n>>>> Finish Program <<<<\n");
    return 0;
}
```

## Disk_Flush

In that case use fflush funciton. this function use for flush the disk. I mean write data buffer data inside file not for wait close the file.

**_fflush structure_**

    fflush(file_pointer);

use this function after use file write function.

# Command_Line_Arguments

command line arguments mean pass the argument by terminal when process the executable file.

In that case main function recive two parameter. first parameter number of arguments and secound parameter array of string which contain all arguments as string.

```c
int main(int argc, char* argv[]){
    return 0;
}
```

in here argc indicate number of argument and argv[] array contain all arguments as string. first string is file name.

**_Example :_**
comand_line

```c
#include <stdio.h>

int main(int argc,char * agrv[]){
    // print all command
    printf(">>>> Command Details <<<<\n");
    printf("Total Command : %d",argc);

    for(int i = 0; i < argc; i++){
        printf("\nCommand No %i : %s",argc,agrv[i]);
    }

    printf("\n>>>> Finish Print Command <<<<");

    // finish the program here
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}
```

**_Run this file like :_**

    ./comand_line md tazri hello world <Enter>

**_Output :_**

```
>>>> Command Details <<<<
Total Command : 5
Command No 5 : ./comand_line
Command No 5 : md
Command No 5 : tazri
Command No 5 : hello
Command No 5 : world
>>>> Finish Print Command <<<<
--
-
>>>> Finish Program <<<<
```

**_Example With beep file :_**

```c
#include <stdio.h>

int main(int argc,char *argv[]){
    unsigned int total_beep;

    // check here is two argument
    if(argc < 2){
        // print finish program
        printf("\n--\n-\n>>>> Please Enter the Number <<<<\n");
        return 0;
    }

    total_beep = atoi(argv[1]);

    // if total beep 0;
    if(total_beep <= 0){
        printf("\n--\n-\n>>>> Please Enter Number Greater Then 0 <<<<\n");
        return 0;
    }

    // create beep sound
    printf("total_beep : %d",total_beep);
    for(int i = 0; i < total_beep; i++){
        printf("\a");
    }

    // print finish program
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}
```

**_Example with show_text file :_**

```c
#include <stdio.h>

int main(int argc,char *argv[]){
    // check user give the file name
    if(argc < 2){
        printf("\n--\n-\n>>>> Please Enter The file name <<<<\a\n");
        return 0;
    }

    // Try to open the folder
    FILE *file = fopen(argv[1],"r");

    if(file == NULL){
        printf("\n--\n-\n>>>> This File Maybe Cannot Exist or Open Error <<<<\a\n");
        return 0;
    }

    // read the file and print everything inside the file

    char line[255];

    printf(">>>> Inside the file : \n\n");
    while(fgets(line,sizeof(line),file))
    {
        printf("%s",line);
    }


    printf("\n\n--\n-\n>>>> Program is Successfully Finish <<<<\a\n");
    return 0;
}
```

**_Example with copy file_**

```c
#include <stdio.h>

// function prototype
void finish_program(char []);

int main(int argc,char *argv[]){
    // check your give 3 argument
    if(argc < 3){
        if(argc < 2){
            finish_program("Please Enter Target File");
            return 0;
        }else{
            finish_program("Please Enter Dist File");
        }
    }

    // check input file exist
    FILE * input_file = fopen(argv[2],"r");

    if(input_file == NULL){
        finish_program(">>>> Your Input File Dose't Exist or Open Error <<<<");
        return 0;
    }

    // create output file
    FILE * output_file = fopen(argv[1],"w");
    char line[244];

    while (fgets(line,sizeof(line),input_file))
    {
        fputs(line,output_file);
    }

    finish_program("Program Successfully Finish.");
    return 0;
}

// finish_program
void finish_program(char message[]){
    printf("\n--\n-\n>>>> %s <<<<\n",message);
}
```
