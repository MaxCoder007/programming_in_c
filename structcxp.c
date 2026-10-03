#include<stdio.h>
struct cpx
{
    int ip,rp;
}a,b;
int main()
{
printf("Enter rp and ip part of the 1st number");
scanf("%d%d",&a.ip,&a.rp);
printf("Enter rp and ip part of the 1st number");
scanf("%d%d",&b.ip,&b.rp);

printf("1st number=%d+i%d",a.rp,a.ip);
printf("\n2nd number=%d+i%d",b.rp,b.ip);
}