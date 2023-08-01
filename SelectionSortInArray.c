#include<stdio.h>
void main()
{
int ar[5];int t,min;
printf("Enter array elements\n");
for(int i=0;i<5;i++)
scanf("%d",&ar[i]);
for(int i=0;i<4;i++)
{
min=i;
for(int j=i+1;j<5;j++)
{
if(ar[min]>ar[j])
{
t=ar[min];
ar[min]=ar[j];
ar[j]=t;
}
}
}
printf("Sorted Array");
for(int i=0;i<5;i++)
printf("%d\t",ar[i]);
}
