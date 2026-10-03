#include<stdio.h>
#include<stdlib.h>
int mall(int i);
int main()
{
int *ptr,n;
printf("enter no of terms=");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof (int));
for (int i=0;i<n;i++)
{
  ptr[i]=mall(i);
}

for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
return 0;
}
int mall(int i){
    i+=1;
return i;
}