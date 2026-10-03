#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","w");

   fputc('a',fptr);
   fputc('s',fptr);
   fputc('d',fptr);//fputc is use to write the text in a file
return 0;
}