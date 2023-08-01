#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    int n1=n;
    while(n1>0){
        int rem=n1%10;
        sum+=(rem*rem*rem);
        n1/=10;
    }
    if(sum==n)
    printf("Number is Armstrong");
    else
    printf("Number is Not Armstrong");
}
