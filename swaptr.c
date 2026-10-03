#include<stdio.h>
void swap(int *ptr,int *_ptr);
int main()
{
int a,b;

printf("Enter two number=");
scanf("%d%d",&a,&b);

swap(&a,&b);
printf("after swaping a=%d,b=%d",a,b);
return 0;
}

void swap(int *ptr,int *_ptr)
{
    int temp=*ptr;
   *ptr=*_ptr;
    *_ptr=temp;
}


