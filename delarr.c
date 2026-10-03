#include<stdio.h>

int main()
{
int n,arr[10],n2;

printf("Enter the size of array=");
scanf("%d",&n);

printf("Enter array elements=");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter element number to be replaced=");
scanf("%d",&n2);

for(int i=n2;i<n;i++)
{
   arr[i]=arr[i+1];
}
for(int i=0;i<n-1;i++)
{
    printf("%d",arr[i]);
}
return 0;
}