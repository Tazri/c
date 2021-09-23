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

    printf("\n\n");
    return 0;
}