#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// costum data type
typedef enum {Rock = 0,Paper=1,Scissors=2} element;
typedef struct
{
    int user_name_len;
    int play_times;
    int win;
    int lose;
    int draw;
    char *name;
} Player;


// function prototype
int random_number(int);
void play(Player *);
void print_rule(void);
void print_select_element(element,element);
void final_result(Player *);

int main(void){
    // necessary variable
    Player user;

    // set user defult value
    user.draw = 0;
    user.lose = 0;
    user.win = 0;

    // get user name
    printf(">>>> Please Enter Your Name Length : ");
    scanf("%d",&user.user_name_len);
    getchar();

    // allocate memory for user name and get how many time user want to play
    user.name = (char *)malloc((sizeof(char)*user.user_name_len)+1);
    printf("\n>>>> Please Enter your Name : ");
    gets(user.name);

    printf(">>>> Hello, %s!\n>>>> Tell Me How Many Time You play : ",user.name);
    scanf("%d",&user.play_times);

    // printf game rule
    print_rule();

    // game is started
    printf("\n>>>> Game Is Started <<<<\n");

    for(int i = 0; i < user.play_times; i++){
        printf("\n>>>> Turn %d <<<<",i+1);
        play(&user);
    }

    // see which is win end of the game
    final_result(&user);

    // print program finish
    free(user.name);
    printf("\n--\n-\n>>>> Finish Program <<<<\n");
    return 0;
}

// random_number
int random_number(int n){
    srand(time(NULL));
    return rand() % n;
}

// print_select_element
void print_select_element(element user_select,element computer_select){
    char element_list[3][11] = {
        "Rock",
        "Paper",
        "Scissors"
    };

    printf("\n>>>> You Choose : %s(%d)\n",element_list[user_select],user_select);
    printf("X\n");
    printf(">>>> Computer's Choose : %s(%d)\n",element_list[computer_select],computer_select);
}

// print_rule
void print_rule(void){
    printf("\n>>>> Game Rule <<<<\n");
    printf(">>>> Please Enter 0 to 2 Where : \n");
    printf(">>>> 0 = Rock\n>>>> 1 = Paper \n>>>> 2 = Scissors\n");
    printf(">>>> Rock(0) X Paper(1) = win Paper(1)\n");
    printf(">>>> Rock(0) X Scissors(2) = win Rock(0)\n");
    printf(">>>> Scissors(2) X Paper(1) = win Scissors(2)\n");
}

// play
void play(Player *player){
    // necessary variable
    element user_choose,computer_choose;

    computer_choose = random_number(3);

    // get user input
    printf("\n>>>> %s's Choose : ",player->name);
    scanf("%d",&user_choose);

    print_select_element(user_choose,computer_choose);

    printf("\n");
    // check this is win or lose or draw
    if(user_choose == computer_choose){
        player->draw++;
        printf(">>>> In This Turn Game Is Draw\n");
    }else if(user_choose == Rock && computer_choose == Paper){
        player->lose++;
        printf(">>>> Computer Win in This Turn\n");
    }else if(user_choose == Rock && computer_choose == Scissors){
        player->win++;
        printf(">>>> %s's Win in This Turn\n",player->name);
    }else if(user_choose == Paper && computer_choose == Rock){
        player->win++;
        printf(">>>> %s's Win in This Turn\n",player->name);
    }else if(user_choose == Paper && computer_choose == Scissors){
        player->lose++;
        printf(">>>> Computer Win in This Turn\n");
    }else if(user_choose == Scissors && computer_choose == Rock){
        player->lose++;
        printf(">>>> Computer Win in This Turn\n");
    }else if(user_choose == Scissors && computer_choose == Paper){
        player->win++;
        printf(">>>> %s's Win in This Turn\n",player->name);
    }
}

// final_result
void final_result(Player *player){
    // print game details
    printf("\n\n>>>> Game Details <<<<\n");
    printf(">>>> %s's Win : %d\n",player->name,player->win);
    printf(">>>> %s's Lose : %d\n",player->name,player->lose);
    printf(">>>> %s's Draw : %d\n",player->name,player->draw);
    printf(">>>> End Game Details <<<<\n\n");

    if(player->win > player->lose){
        printf(">>>> You Win This Game's :) \n\n");
    }else if(player-> win < player->lose){
        printf(">>>> You Lose This Game's :( \n\n");
    }else{
        printf(">>>> The Game's Is Draw : | \n\n");
    }

    printf("\n>>>> Press Any key to exit the program....");
    getchar();
    getchar();
}
