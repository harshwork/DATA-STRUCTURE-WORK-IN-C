#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*next;
};
struct node *newnode,*temp,*start;int c=0;
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
void count(){
    temp=start;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
}
void insertmid(){
    temp=start; int pos,k=1;
    printf("Enter position");
    scanf("%d",&pos);
    if(pos>c||pos==0)
    printf("Invalid Input");
    else{
        while(k<pos-1){
            temp=temp->next;
            k++;
        }
          newnode=(struct node*)malloc(sizeof(struct node));
          printf("Enter data at middle");
          scanf("%d",&newnode->data);
          newnode->next=temp->next;
          temp->next=newnode;
    }
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
    count();
    insertmid();
    display();
}
