#innclude<stdio.h>

int main()
{
int arr[]={1,2,3,4,5};
int *ptr=arr[0];

printf("%d",ptr);
printf("%d",*(arr+2));


}