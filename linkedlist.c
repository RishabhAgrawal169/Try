#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head= NULL;
void insertlast(int value)
{
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data=value;

    struct node* t=head;
    while(t->next!=NULL)
        t=t->next;

    t->next=new_node;

    new_node->next=NULL;

}
void insertfirst(int value)
{
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data=value;

    new_node->next=head;
    head=new_node;
}

void traversal()
{
struct node *t=head;
while(t!=NULL)
    {printf("%d ",t->data);
    t=t->next;}
}
void main()
{
    traversal();
    printf("\n");
    insertfirst(1);//1
     traversal();
     printf("\n");
    insertfirst(2);//2 1
     traversal();
     printf("\n");
    insertfirst(3);//3 2 1
     traversal();
     printf("\n");
    insertfirst(1);//1 3 2 1
     traversal();
     printf("\n");
    insertfirst(2);//2 1 3 2 1
     traversal();
     printf("\n");
    insertlast(3);//2 1 3 2 1 3
    traversal();
    printf("\n");

}
