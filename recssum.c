#include<stdio.h>

int sum(int n);
int main()
{
int n=6,sum3;
sum3=sum(n);
printf("sum=%d",sum3);
return 0;

}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sum1=sum(n-1);
    int sum2=sum1+n;
    return sum2;
}
