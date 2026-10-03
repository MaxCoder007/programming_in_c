#include<stdio.h>
int main()
{
int n,sum=0 ;
printf("Enter number terms of natural number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  sum=sum+i;
}
float avg=sum/2.0;
printf("sum=%d\navg=%.2f",sum,avg);
return 0;
}