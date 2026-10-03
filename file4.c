#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","r");

    printf("%c\n",fgetc(fptr));
     printf("%c\n",fgetc(fptr));// fgetc is used to read text from the file
      printf("%c\n",fgetc(fptr));
return 0;
}