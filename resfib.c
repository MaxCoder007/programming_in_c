#include<stdio.h>

int fib(int i);
int main()
{
int n=6;
for(int i=0;i<n;i++)
{
printf("series=%d",fib(i));
}
return 0;

}
int fib(int i)
{
    if(i==0)
    {
        return 0;
    }
    else
    {
        if(i==1)
        {
        return 1;
        }
    }
    int fib1=fib(i-1)+fib(i-2);
   
    return fib1;
}
