#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr;

ptr=(int*)calloc(5,sizeof (int));
for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
free(ptr);/*we usethis function to free memoryallocted using malloc and calloc*/
ptr=(int*)calloc(2,sizeof (int));
for(int i=0;i<2;i++)
{
    printf("\t%d",ptr[i]);
}
return 0;
}