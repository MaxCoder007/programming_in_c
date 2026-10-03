#include<stdio.h>
int main()

{
    int n,count=10;
    printf("Enter number of rows=");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
for(int j=1;j<=n-i;j++)
{
    printf("    ");

}
for(int j=1;j<=i;j++)
{
    printf("%4d",++count);
}
for(int j=i-1;j>=1;j--)
{
    
    printf("%4d",--count);
}
printf("\n");
}
return 0;
}