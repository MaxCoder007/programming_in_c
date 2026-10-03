#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.c","r");
    if(fptr==NULL)
    {
        printf("file doesnot exist");
    }
    else{
        printf("file exist");
    }
    return 0;
}