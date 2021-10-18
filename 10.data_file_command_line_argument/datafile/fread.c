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
