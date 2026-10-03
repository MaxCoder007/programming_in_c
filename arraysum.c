#include<stdio.h>

int main()
{
int n,arr[10],sum=0;
float avg;
printf("Enter the size of array=");
scanf("%d",&n);

printf("Enter array elements=");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)
{
    sum=sum+arr[i];
}

avg=(float)sum/2;

printf("sum=%d,average=%.2f",sum,avg);
return 0;

}