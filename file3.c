#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("text.txt","a");/*while opening the file if we use 'a'or append
    the it will  not create a new fill or erease the file data or text*/
    
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'h');
   
    return 0;
}