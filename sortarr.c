#include<stdio.h>

int main()
{

int n,arr[20];
printf("Enter the size of array=");
scanf("%d",&n);

printf("Enter array elements=");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)
{
   if(arr[i]>arr[i+1])
{
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
}
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}