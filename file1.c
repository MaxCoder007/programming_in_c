#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character=%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("\ncharacter=%c",ch);
    int n;
    fscanf(fptr,"%d",&n);
    printf("\nNumber=%d",n);
    fclose(fptr);
    return 0;
}// to read from the file
//to open file = fopen("file name","prepouslike r w a wb rb")
//to close file= fclose(fptr);
//to write in file = fputc('to write',filename)or fprintf( fptr"format specfier",argument)
//to read  in file =  printf("format specfier",fgetc(fptr));