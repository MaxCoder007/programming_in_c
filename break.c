#include<stdio.h>

int main()
{
    int n;
    printf("Enter no of rows=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i>3)
        {
           break;
        }
        printf("%d",i);
    }
return 0;
}
// for loop is used to completely get out of for loop