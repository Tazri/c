[![Github](./asset/badge/github.svg)](https://github.com/Tazri) ![Ansi C](./asset/badge/c.svg) ![Crimson](./asset/badge/c-crimson.svg)

# C Programming Language

This is my simple and small documentation on c. I create this documentation on ansi standard c programming language.

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

## Selectin Operators

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
