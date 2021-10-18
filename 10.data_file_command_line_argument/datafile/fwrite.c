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