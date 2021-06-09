#include <stdio.h>
#include <string.h>

void main(){
    // char name[20];
    // printf("Enter you name please : ");
    // fgets(name,20,stdin);
    // // gets(name);

    // for(int i = 0;i < strlen(name);i++){
    //     printf(">%c\n",name[i]);
    // }

    // learn about strlen
    // int length = strlen(name) - 1;
    // printf("You name length is : %d",length);


    // learn about the strcat
    char str[20] = "Md Tazri.";
    char name[20] = "Md Tazri.";
    printf("str = %s\n",str);
    printf("name = %s\n",name);

    // printf("\n>>>>>Use strcat<<<<<\n");
    // strcat(str,name);
    // printf("str = %s\n",str);
    // printf("name = %s\n",name);

    // // learn about the strcpy
    // printf("\n\n>>>>>Use strcpy<<<<<\n\n");
    // strcpy(str,name);
    // printf("str = %s\n",str);
    // printf("name = %s\n",name);

    //  learn about strncat
    // printf("\n>>>>>Use strncat<<<<<\n");
    // strncat(str,name,2);
    // printf("str = %s\n",str);
    // printf("name = %s\n",name);
    

    // learn about strncpy
    // printf("\n>>>>>Use strncpy<<<<<\n");
    // strncpy(str,name,4);
    // printf("str = %s\n",str);
    // printf("name = %s\n",name);

    // learn about strcmp
    // printf("\n>>>>>Use strcmp<<<<<\n");
    // int is_same = strcmp(str,name);

    // printf("is_same = %d\n",is_same);
    // if reaturn 0 it mean it's same. not return 0 it's mean it not same

    // learn about strncmp
    // printf("\n>>>>>Use strncmp<<<<<\n");
    // int is_same = strncmp(str,name,2);

    // printf("is_same = %d\n",is_same);

    // learn about strchr
    int *ptr = NULL;
    ptr = strchr(str,'i');
    // printf("ptr = %x\n",ptr);
    // printf("*ptr = %c %d\n",*ptr,*ptr);
    // find the i index
    printf("i index = %d\n",(char *)ptr-str+1);

    // print again
    printf("str = %s\n",str);
    printf("name = %s\n",name);

    printf("\n\n");
}

