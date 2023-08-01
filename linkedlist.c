#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*start;
void  main(){
start=NULL;int choice =1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(start==NULL){
start=newnode;
temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("Do you want to continue(0,1)");
scanf("%d",&choice);
}
temp=start;
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->next;
}
}

