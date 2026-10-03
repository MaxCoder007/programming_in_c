#include<stdio.h>

int main()
{
    int n;
    printf("Enter no of rows=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
           continue;
        }
        printf("%d",i);
    }
return 0;
}
// continue statment get back to the for loop