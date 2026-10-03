#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","w");/*while opening the file if we use 'w'or write
    the it will create a new fill or erease the file data or text*/
    
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'h');
   
    return 0;
}