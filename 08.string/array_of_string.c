#include <stdio.h>

void main(){
    // char name[3][20] = {
    //     "Md Tazri",
    //     "Erewin",
    //     "Eren"
    // };

    // for(int i = 0; i < 3; i++){
    //     printf("0%d. %s\n",i,name[i]);
    // }

    // create array of string by pointer
    char *name[] = {
        "Md Tazri",
        "Erwin",
        "Eren"
    };

    for(int i = 0; i < 3; i++){
        printf("0%d. %s\n",i,name[i]);
    }

    printf("\n>>>>Print again<<<<\n");
    for(int j = 0;j < 3;j++){
        printf("%d/ name = %s\n",j,*(name+j));
    }

    printf("\n");
}

