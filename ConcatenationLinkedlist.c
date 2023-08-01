#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode,*L1,*L2,*temp;
void createlist1(){
    L1=NULL;int choice=1;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data in first list");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(L1==NULL){
            L1=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue for list1(0,1)");
        scanf("%d",&choice);
    }
}
void createlist2(){
     L2=NULL;int choice=1;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data in second list");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(L2==NULL){
            L2=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue for list2(0,1)");
        scanf("%d",&choice);
    }
    
}
void concatenate(){
    temp=L1;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=L2;
}
void display(struct node*temp){
   while(temp!=NULL){
       printf("%d",temp->data);
       temp=temp->next;
   }
}
void main(){
    createlist1();
    display(L1);
    createlist2();
    display(L2);
    printf("\n");
    concatenate();
    display(L1);
}
