#include<stdio.h>

int main()
{
    int n,flag=1;
    printf("Enter no of rows=");
    scanf("%d",&n);

    for(int i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
        flag=0;
        break;
       }
    }
    if(flag)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
return 0;
}