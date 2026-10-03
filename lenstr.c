#include<stdio.h>

int main()
{
    char x[25];

    printf("Enter a string=");
    gets(x);
int count=0;
    for(int i=0;x[i]!='\0';i++)
{
    count++;

}
printf("length of the string is =%d",count);
return 0;
}