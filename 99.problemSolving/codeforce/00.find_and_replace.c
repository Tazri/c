#include <stdio.h>

#define SIZE 27

int map[SIZE];

void clear(){
    int i,len;

    for(i = 0;i < SIZE;i++){
        map[i] = 0;
    }
}

int get_letter_no(char a){
    return a-'a' + 1;
}

int is_alternative(char str[],int size){
    int i,l;
    char c;

    if(size == 1){
        clear();
        return 1;
    }

    for(i = 0;i < size;i++){
        l = get_letter_no(str[i]);

        if(map[l] == 0){
            map[l] = (i+1);
        }else{
            if((map[l] & 1) == ((i+1) &1)){
                continue;
            }else{
                clear();
                return 0;
            }
        }
    }



    clear();
    return 1;
}

int main(){
    int len,testcase;

    scanf("%d",&testcase);

    while(testcase--){
        scanf("%d",&len);
        getchar();

        char str[len+1];
        scanf("%s",str);
        getchar();

        if(is_alternative(str,len)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    

    return 0;
}