#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next ,*prev;
};
struct node *newnode,*start,*temp;
void insertbeg(){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data at beginning");
        scanf("%d",&newnode->data);
        newnode->next=start;
        newnode->prev=NULL;
        start->prev=newnode;
        start=newnode;
}
void createdoublelist(){
    start=NULL;int choice =1;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
        scanf("%d",&newnode->data);
    newnode->next=NULL;
        if(start==NULL){
            start=newnode;
            temp=newnode;
            newnode->prev=NULL;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue(0,1)");
                scanf("%d",&choice);
    }
}
void insertend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data at end");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=start;
    while(temp->next!=NULL)
    temp=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
}
void display(){
        temp=start;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main(){
    createdoublelist();
    display();
    insertbeg();
    display();
    insertend();
    display();
}
