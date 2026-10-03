#include<stdio.h>

int main()
{
int arr[3][2];
printf("Enter array elments=");
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
       printf("%4d",arr[i][j]);
    }
    printf("\n");
}
}