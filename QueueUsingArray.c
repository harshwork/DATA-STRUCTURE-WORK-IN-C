#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1)
    printf("Overflow");
    else if(front==-1&&rear==-1)
    {
        front++;
        rear++;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1&&rear==-1)
    printf("Underflow");
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
void display(){
    if(front==-1&&rear==-1)
    printf("List is Empty");
    else{
        int i=front;
        while(i<rear+1){
        printf("%d",queue[i]);
            i++;
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
