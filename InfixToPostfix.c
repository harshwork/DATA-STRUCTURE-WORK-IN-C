#include<stdio.h>
#include<string.h>
#define N 100
char infix[N];
char stack[N/3];
char postfix[N];
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
    int i,p=0;
    char next,symbol;
    for(i=0;i<strlen(infix);i++){
        symbol=infix[i];
        if(!iswhitespace(symbol)){
            switch(symbol){
                case '(':
                push(symbol);
                break;
                case ')':
                while((next=pop())!='('){
                postfix[p]=next;
                p++;
                }
                break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                while(!isEmpty()&&priority(stack[top])>=priority(symbol)){
                    postfix[p]=pop();
                    p++;
                }
                push(symbol);
                break;
                default:
                postfix[p]=symbol;
                p++;
                }     
        }
    }
    while(!isEmpty()){
        postfix[p]=pop();
        p++;
    }
    postfix[p]='\0';
}
void display(){
    printf("%s",postfix);
}
void main(){
    printf("Enter infix array");
    scanf("%s",infix);
    conversion();
    display();
}
