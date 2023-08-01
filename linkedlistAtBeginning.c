#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*next;
};
struct node *newnode,*temp,*start;
void insertbeg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data at beginning");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
}
void display()
{

    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    start=NULL;int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data to create list");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL){
            start=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter your choice(0,1)");
        scanf("%d",&choice);
    }
    display();
    insertbeg();
    display();
}
