#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","r");

   char ch;
   while(ch!=EOF)// fgetc return EOF to shoe that the file ended there
   {
    ch=fgetc(fptr);
    printf("%c",ch);
   }
return 0;
}