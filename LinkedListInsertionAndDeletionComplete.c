#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node*next;
};
struct node *newnode,*temp,*start,*temp1;int c=0,choice=1,pos,i=1;
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
void insertmid(){ 
    temp=start;
    i=1;
    printf("Enter position\n");
    scanf("%d",&pos);
    if(pos>c||pos==0)
    printf("Invalid Input\n");
    else{
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
          newnode=(struct node*)malloc(sizeof(struct node));
          printf("Enter data at middle");
          scanf("%d",&newnode->data);
          newnode->next=temp->next;
          temp->next=newnode;
    }
}
void createlist(){
    start=NULL;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data to create list");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL){   start=newnode;
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
}
void count(){
    temp=start;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
}
void delbeg(){
    temp=start;
    start=start->next;
    free(temp);
    temp=NULL;
}
void delend(){
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
void delmid(){
      i=1;
      temp=start;
    printf("Enter position to delete\n");
    scanf("%d",&pos);
  if(pos>c||pos==0){
      printf("Invalid Input\n");
  }
  else{
    while(i<pos-1){
       temp=temp->next;
       i++;
    }
    struct node *temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
  }
}
void display(){

    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    createlist();
    display();
    insertbeg();
    display();
    insertend();
    display();
    count();
    insertmid();
    display();
printf("\n");
    delbeg();
    display();
printf("\n");
    delend();
    display();
printf("\n");
    count();
    delmid();
    display();
}
