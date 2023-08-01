#include<stdio.h>
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}
void main()
{
int n,fa;
printf("Enter a number");
scanf("%d",&n);
fa=fact(n);
printf("Factorial of %d is %d",n,fa);
}

