#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next ,*prev;
};
struct node *newnode,*start,*temp;
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
    temp=start;
    while(temp!=NULL){
        printf("%d",temp->data);
        printf("\n%p,%p",temp->prev,temp->next);
        temp=temp->next;
    }
}
void main(){
    createdoublelist();
}
