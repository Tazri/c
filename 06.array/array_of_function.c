#include <stdio.h>

// function prototype
void say_hello();
void say_hi();
void say_goodmorning();

void main(void){
    void (*functions[])() = {
        say_hello,
        say_hi,
        say_goodmorning
    };

    functions[0]();
    functions[1]();
    functions[2]();
}

// say_hello function
void say_hello(){
    printf("Hello, World!\n");
}

// say_hi function
void say_hi(){
    printf("Hi, World!\n");
}

// say_goodmornning() function
void say_goodmorning(){
    printf("Good Mornning, World!\n");
}