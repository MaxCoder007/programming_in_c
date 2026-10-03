#include<stdio.h>

struct vector{
    int a;
    int b;
}vect;
void sum(int vector vect[3])
int main()
{
struct vector vect[3];

printf("Enter first vector=");
for(int i=0;i<3;i++)
{
    scanf("%d",&vect[i].a);
}
printf("Enter second vector=");
for(int i=0;i<3;i++)
{
    scanf("%d",&vect[i].b);
}

return 0;
}