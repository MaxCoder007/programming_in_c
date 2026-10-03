#include<stdio.h>
int main()
{
int age=25,_age=67;
int *ptr=&age,*_ptr=&_age;
printf("ptr=%u",ptr);
printf("_ptr=%u",_ptr);
//printf("sum=%u",ptr+_ptr); sum cannot be done with pointers
printf("minues=%u",ptr-_ptr);
printf("compear=%u",ptr==_ptr);

return 0;
}
/*
The difference is -1 because pointer subtraction doesn't return the difference 
in bytes but rather the difference in terms of the type they point to—in this
 case, int, which is typically 4 bytes in a 32-bit system (or 8 bytes in a 64-bit system).
Let's break it down:
ptr points to the address of age.
_ptr points to the address of _age.
When you subtract one pointer from another (ptr - _ptr), you're essentially calculating 
how many int elements apart they are. Since age and _age are one int apart in memory,
 ptr - _ptr yields -1 (which means _ptr is located just one int before ptr in memory order)*/