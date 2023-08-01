#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int x){
 struct node *newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->next=NULL;
 if(front==NULL&&rear==NULL){
     front=newnode;
     rear=newnode;
 }
 else{
     rear->next=newnode;
     rear=newnode;
 }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(front==NULL&&rear==NULL)
    printf("Underflow");
    else{
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node *temp=front;
    if(front==NULL&&rear==NULL)
    printf("List is Empty");
    else{
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    printf("\n");
    dequeue();
    display();
}
