#include<stdio.h>

#include<string.h>

int s[50];
int top=0;

void push(int ch);
int pop();

void main()
{
	int a,b,c,i;
	char prefix[50];


	printf("\nEnter the prefix string in figures(1 digit nos);");
	scanf("%s",prefix);
	for(i=strlen(prefix)-1;i>=0;i--)
	{
		if(prefix[i]=='+')
		{
			c=pop()+pop();
			push(c);
		}
		else if(prefix[i]=='-')
		{
			a=pop();
			b=pop();
			c=a-b;
			push(c);
		}
		else if(prefix[i]=='*')
		{	a=pop();
		b=pop();
		c=b*a;
		push(c);
		}
		else if(prefix[i]=='/')
		{
			a=pop();
			b=pop();
			c=b/a;
			push(c);
		}
		else
		{
			push(prefix[i]-48);
		}
	}
	printf("\nFinal ans = %d",pop());
}

void push(int ch)
{
	top++;
	s[top]=ch;
}

int pop()
{
	int ch;
	ch=s[top];
	top=top-1;
	return(ch);
}
