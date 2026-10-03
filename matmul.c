#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,x,y,i,j,k;
    printf("Enter the order of 1st matrix=");
    scanf("%d%d",&m,&n);
printf("Enter the order of 2nd matrix=");
    scanf("%d%d",&x,&y);


if(n!=x){
    printf("Multiplcation is no possible");
}
else
{
    printf("Enter 1st matrix=\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   
}

printf("Enter 2nd matrix=\n");
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        scanf("%d",&b[i][j]);
    }
  
}
for(i=0;i<m;i++)
{
     for(j=0;j<y;j++)
{
    c[i][j]=0;
    for(k=0;k<n;k++)
    {
        c[i][j]+=a[i][k]*b[k][j];
    }
}
}

printf("1st matrix=\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
       printf("%4d",a[i][j]);
    }
    printf("\n");
}
printf("2nd matrix=\n");
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        printf("%4d",b[i][j]);
    }
    printf("\n");
}
printf("The product of 1st and 2nd matrixis=\n");
for(i=0;i<m;i++)
{
    for(j=0;j<y;j++)
    {
        printf("%4d",c[i][j]);
    }
    printf("\n");
}
}
return 0;

}