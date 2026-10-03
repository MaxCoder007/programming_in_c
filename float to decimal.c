#include<stdio.h>

int  main()
{
float f;
int a;

printf("Enter a decimal number=");
scanf("%f",&f);
a=f;
f=f-a;
printf("integer point=%d",a);
printf("floating point=%f",f);


return 0;

}