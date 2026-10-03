#include<stdio.h>
#include<stdlib.h>
int main()
{

int *ptr,n;
printf("Enter size=");
scanf("%d",&n);

ptr=(int*)calloc(5,sizeof (int));

for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
ptr=realloc(ptr,5);//we use realloc fun to  increase or decrease memory used by malloc or calloc
printf("Enter nxt 5 numbers=");
for(int i=0;i<5;i++)
{
    scanf("\n%d",&ptr[i]);
}
for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
return 0;
}