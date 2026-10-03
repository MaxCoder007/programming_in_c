#include<stdio.h>
 int main()
 {
 int n;
 char na[25];
 float cgp;

 printf("Enter your name=");
 scanf("%s",na);
 printf("Enter your age=");
 scanf("%d",&n);

printf("Enter your cgpa=");
 scanf("%f",&cgp);


 FILE *fptr;
    fptr=fopen("text.txt","w");
    fputc('student details=',fptr);
fprintf(fptr,"%s\t",na);
fprintf(fptr,"%d\t",n);
fprintf(fptr,"%f\t",cgp);
fclose(fptr);
return 0;
 }
