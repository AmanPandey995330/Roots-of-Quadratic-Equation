#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};

void linkedListTraversal(struct node*head)
{
    struct node*ptr = head;

    printf("element is %d\n", ptr-> data);
    ptr = ptr -> link;

    while (ptr!= head)
    {
        printf("element is %d\n", ptr -> data);
        ptr = ptr -> link;
    }
}

struct node*insertatfirst(struct node*head, int data){
    struct node*ptr= malloc(sizeof( struct node));
    ptr -> data = data;
    struct node*p = head -> link;
    while(p-> link!= head){
        p = p-> link;
    }
    p -> link = ptr ;
    ptr -> link = head;
    head = ptr ;
    return head;
}

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    head -> data = 34;
    head -> link = second ;

    second  -> data = 37;
    second -> link = third ;

    third -> data = 67;
    third-> link = fourth ;

    fourth -> data = 78;
    fourth -> link = head ;


    head = insertatfirst(head, 789);
    linkedListTraversal(head);
    return 0;

}