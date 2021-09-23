#include <stdio.h>
#include <string.h>

// create simple node type structure
struct node_type_struct{
    char type[10];
    int x;
    int y;
    struct node_type_struct * next;
};

// print part
void print_part(struct node_type_struct *);

int main(void){
    // create head, body and tail structure
    struct node_type_struct head, body, tail;

    // head
    head.x = 10;
    head.y = 10;
    head.next = &body;
    strcpy(head.type,"Head");

    // body 
    body.x = 50;
    body.y = 50;
    body.next = &tail;
    strcpy(body.type,"Body");

    // tail
    tail.x = 100;
    tail.y = 100;
    tail.next = &head;
    strcpy(tail.type,"Tail");

    // print head
    print_part(&head);
    print_part(head.next);
    print_part(head.next->next);

    // change head value
    head.next->next->next->x = 3000;
    print_part(head.next->next->next);
    
    printf("\n");
    return 0;
}

// print_part
void print_part(struct node_type_struct * part){
    printf("\n===> Print %s <===\n",part->type);
    printf("Name : %s\n",part->type);
    printf("Position X : %d\n",part->x);
    printf("Position Y : %d\n",part->y);
    printf("===> Finish <===\n");
    printf("\n");
}