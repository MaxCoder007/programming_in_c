

#include<stdio.h>
#include<conio.h>

struct student // structure declaration 
{
    int rollno;    // struct member variable datatype  struct member variable 
    float pre;
    char sec;
    char name[25];
};

int main()
{
    struct student a, b;

    printf("Enter 1st student rollno, name, pre, sec = ");
    scanf("%d %25s %.2f", &a.rollno, a.name, &a.pre);
   // Clear the input buffer before reading next 
      while
       ((getchar()) != '\n');
    scanf("%c", &a.sec);
     



    printf("\nEnter 2nd student rollno, name, pre, sec = ");
    scanf("%d %25s %.2f", &b.rollno, b.name, &b.pre);
    // Clear the input buffer before reading next 
      while
       ((getchar()) != '\n');
    scanf("%c", &b.sec);
     

    printf("\nrollno\tname\tpre\tsec\n");
    printf("%d\t%25s\t%.2f\t%c\n", a.rollno, a.name, a.pre, a.sec);
    printf("%d\t%25s\t%.2f\t%c\n", b.rollno, b.name, b.pre, b.sec);

    getch();
    return 0;
}
/*

Explanation of Changes:

1. getchar();  // to consume the newline character left after float input
    scanf("%c", &b.sec);Removed unnecessary commas in the scanf() format.


2. Added getchar() after scanf() to handle the newline issue before reading sec.


3. Used %.2f in printf() to limit the precision of the floating-point value to two decimal places.


*/
