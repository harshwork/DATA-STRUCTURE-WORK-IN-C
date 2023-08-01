#include<stdio.h>
#include<string.h>
#define N 100
char infix[N];
char stack[N/3];
char prefix[N];
int top=-1;
int isEmpty(){
    if(top==-1)
    return 1;
    else 
    return 0;
}
int priority(char ch){
    if(ch=='+'||ch=='-')
    return 1;
    else if(ch=='*'||ch=='/')
    return 2;
    else 
    return 3;
}
int iswhitespace(char ch1){
    if(ch1==' ')
    return 1;
    else 
    return 0;
}
void push(char ch2){
    if(top==N-1)
    printf("Overflow");
    else{
        top++;
        stack[top]=ch2;
    }
}
char pop(){
    char item;
    if(top==-1)
    printf("Underflow");
    else{
     item=stack[top];
     top--;
     return item;
    }
}
void conversion(){
    int i,p=strlen(infix)-1;
    char next,symbol;
    for(i=strlen(infix)-1;i>=0;i--){
        symbol=infix[i];
        if(!iswhitespace(symbol)){
            switch(symbol){
                case ')':
                push(symbol);
                break;
                case '(':
                while((next=pop())!=')'){
                prefix[p]=next;
                p--;
                }
                break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                while(!isEmpty()&&priority(stack[top])>=priority(symbol)){
                    prefix[p]=pop();
                    p--;
                }
                push(symbol);
                break;
                default:
                prefix[p]=symbol;
                p--;
                }     
        }
    }
    while(!isEmpty()){
        prefix[p]=pop();
        p--;
    }
}
void display(){
    printf("%s",prefix);
}
void main(){
    printf("Enter infix array");
    scanf("%s",infix);
    conversion();
    display();
}
