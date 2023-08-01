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
void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data at end");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=start;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newnode;
}
void deleteend(){
    struct node *temp1;
    temp=start;
    temp1=start;
    while(temp1->next->next!=NULL){
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    temp1=temp1->next;
    free(temp1);
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
    insertend();
    display();
    printf("\n");
    deleteend();
    display();
}
