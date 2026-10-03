#include<stdio.h>

int main()
{

int arr[]={1,2,3,4,5};
int *ptr=&arr[0];
int *_ptr=&arr[1];


printf("%d",ptr);
printf("\n%d",_ptr);
printf("\n%d",_ptr-ptr);
printf("\n%d",*(arr+2));
return 0;

}