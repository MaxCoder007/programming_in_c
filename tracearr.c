#include<stdio.h>

int main()
{
int arr[10][10],m,n,i,j;
printf("Enter order of the matrix=");
scanf("%d%d",&m,&n);
printf("Enter array elments=");
for( i=0;i<m;i++)
{
    for( j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
       printf("%4d",arr[i][j]);
    }
    printf("\n");
}
if(m!=n)
{
    printf("Matrix in not a square matrix");
}
else
{
int sum=0;
for( i=0;i<m;i++)

{
    for( j=0;j<n;j++)
    {
       if(i==j)
       {
        sum=sum+arr[i][j];
       }
    }
    
}
printf("sum=%d",sum);
}
return 0;
}
