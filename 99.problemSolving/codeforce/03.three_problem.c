#include <stdio.h>

#define false 0
#define true 1

typedef struct {
    int number;
    long int complexity;
} Problem_Type;


int is_selected(Problem_Type *list[],int size,long int complexity){
    int i = 0;
    
    for(i = 0;i < size;i++){
        if(complexity == list[i]->complexity){
            return true;
        }
    }

    return false;
}

void sort(Problem_Type *li[],int size){
    int i,j;
    Problem_Type *temp;
    for(i = 0;i < size;i++){
        for(j = i+1;j < size;j++){
            if(li[i]->complexity > li[j]->complexity){
                temp = li[i];
                li[i] = li[j];
                li[j] = temp;
            }
        }
    }
}

int main(){
    int total_problem,i,selected = 1;
    long int complexity;
    int finded = 3;
    Problem_Type *a;
    Problem_Type *b;
    Problem_Type *c;

    scanf("%d",&total_problem);

    Problem_Type all_problems[total_problem];
    Problem_Type *select_list[3];

    for(i = 1;i <= total_problem;i++){
        all_problems[i-1].number = i;
        scanf(" %ld",&all_problems[i-1].complexity);
    }

    // first is selected
    select_list[0] = &all_problems[0]; 

    for(i = 1;i < total_problem;i++){
        if(selected >= 3){
            break;
        }

        if(is_selected(select_list,selected,all_problems[i].complexity)){
            continue;
        }else{
            select_list[selected] = &all_problems[i];
            selected++;
        }
    }

    
    if(selected < 3){
        printf("-1 -1 -1\n");
    }else{
        sort(select_list,3);
        printf("%ld %ld %ld\n",select_list[0]->number,select_list[1]->number,select_list[2]->number);
    }
}