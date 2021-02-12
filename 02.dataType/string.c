#include <stdio.h>

int main(void){

    // string type variable in c
    // there are 4 way to declear string in c

    // way one %s 
    char nameOne[8];
    nameOne[0] = 'M';
    nameOne[1] = 'd';
    nameOne[2] = ' ';
    nameOne[3] = 'T';
    nameOne[4] = 'a';
    nameOne[5] = 'z';
    nameOne[6] = 'r';
    nameOne[7] = 'i';
    printf("nameOne = %s\n ",nameOne);

    // way two %s
    char nameTwo[8] = {'M' ,'d',' ','T','a','z','r','i'};
    printf("nameOne = %s \n",nameTwo);

    // way three %s
    char nameThree[8] = "Md Tazri";
    printf("nameThree = %s\n",nameThree);

    // way four %s
    char *nameFour = "Md Tazri";
    printf("nameFour = %s \n",nameFour);

    // scanf string 
    char myName[5];
    printf("Tell me your name : ");
    scanf("%s",&myName);

    printf("\nHello %s\n",myName);
    return 0;
}

/**
 * name = "Md Tazri",
 * in c here 
 * char name[8];
 * name[0] = 'M';
 * name[1] = 'd';
 * name[2] = ' ';
 * name[3] = 'T';
 * name[4] = 'a';
 * name[5] = 'z';
 * name[6] = 'r';
 * name[7] = 'i';
 * 
 * another way
 * name[8] = ['M','d',' ','T','a','z','r','i'];
 * 
 * another way
 * name[8] = "Md Tazri";
 * 
 * another way 
 * *name = " Md Tazri";
*/