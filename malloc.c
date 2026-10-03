#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr;

ptr=(int*)malloc(5*sizeof (int));// malloc funtion take no of bytes to be allocated& return a pointer of type void 

ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=4;
ptr[4]=5;
for(int i=0;i<5;i++)
{
    printf("\n%d",ptr[i]);
}
return 0;

}
/*Using int *ptr in this code serves several key purposes related to dynamic memory management and
 flexibility. Here are the details:

1. Dynamic Memory Allocation
c
int *ptr;
ptr = (int *)malloc(5 * sizeof(int));
This allows you to allocate memory at runtime, giving you flexibility to decide the amount of memory 
your program needs based on its execution. In this case, you're allocating space for 5 integers.

2. Memory Efficiency
By using pointers, you can efficiently manage memory. Instead of declaring a fixed-size array that
 might waste memory, you allocate just the right amount of memory needed.

3. Accessing Memory Locations
c
ptr[0] = 1;
ptr[1] = 2;
// ...
This allows you to access and manipulate memory locations directly. The ptr pointer points to 
the allocated memory, and you can use it like an array to store and retrieve values.

4. Flexibility
Pointers offer flexibility in handling arrays and other data structures. With a pointer, you can 
easily resize the allocated memory if needed, use it in functions to avoid copying large structs
 or arrays, and manage complex data structures like linked lists and trees.

Example Scenario
Imagine you are writing a program where you don't know in advance how many integers you'll need
 to store. By using a pointer and dynamic memory allocation, you can ask the user for the 
  of integers and allocate just enough memory accordingly.

To sum up, using int *ptr with dynamic memory allocation makes your code more adaptable,
 memory-efficient, and suitable for various scenarios where the size of data isn't known at compile time.

Does that clarify the use of int *ptr? Feel free to ask if you have more questions or another example in mind!*/