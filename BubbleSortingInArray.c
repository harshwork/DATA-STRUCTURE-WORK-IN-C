#include<stdio.h>
void main()
{
int n;
printf("Enter size of array");
scanf("%d",&n);
int ar[n];
printf("Enter array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
if(ar[j]>ar[j+1])
{
int t=ar[j];
ar[j]=ar[j+1];
ar[j+1]=t;
}
}
}
printf("Sorted Array\n");
for(int i=0;i<n;i++)
printf("%d\t",ar[i]);
}
