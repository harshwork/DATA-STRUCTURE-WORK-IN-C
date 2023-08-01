 #include<stdio.h>
int Partition(int a[],int lb,int ub)
{
int pivot=a[lb];
int start=lb;
int end=ub;

while(start<end){
while(a[start]<pivot)
start++;
while(a[end]>pivot)
end--;
if(start<end)
{
 int temp=a[start];
a[start]=a[end];
a[end]=temp;
}
}
int temp=a[start];
a[start]=a[end];
a[end]=temp;

return end;
}
void Quick(int ar[],int low,int high){
    if(low>=high)
    {
        return;
    }
int loc=Partition(ar,low,high);
Quick(ar,low,loc-1);
Quick(ar,loc+1,high);

}
int main(){
int n;
int i;
printf("Enter size of array");
scanf("%d",&n);
int ar[n];
printf("Enter array elements");
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
}
 
Quick(ar,0,n+1);

for( i=0;i<n;i++){
printf("%d",ar[i]);}
return 0;
}
