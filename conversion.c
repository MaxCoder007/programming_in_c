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
printf("floating point=%.2f",f);


return 0;

}
/*
Example for
Explicit Type Conversion (also known as type casting) is when a programmer manually converts
 a value from one data type to another. This is done using a cast operator, which is a method 
 that specifically tells the compiler to change the type of a variable or value.*/