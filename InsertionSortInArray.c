#include<stdio.h>
void main()
{
int n,j;
printf("Enter size of array");
scanf("%d",&n);
int ar[n];
printf("Enter array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(int i=1;i<n;i++)
{
int k=ar[i];
for(j=i-1;j>=0&&k<ar[j];j--)
{
ar[j+1]=ar[j];
}
ar[j+1]=k;
}
printf("Sorted array");
for(int i=0;i<n;i++)
{
printf("%d",ar[i]);
}
}

