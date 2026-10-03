#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr;

ptr=(int*)calloc(5,sizeof (int));/*calloc
 funtion take no of bytes to be allocated& return a pointer of type void and initialize with zero*/
for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
return 0;

}