
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
    scanf("%d %s %f", &a.rollno, a.name, &a.pre);
    getchar();  // To consume the newline character left after float input
    scanf("%c", &a.sec);

    printf("\nEnter 2nd student rollno, name, pre, sec = ");
    scanf("%d %s %f", &b.rollno, b.name, &b.pre);
    getchar();  // To consume the newline character left after float input
    scanf("%c", &b.sec);

    printf("\nrollno\tname\tpre\tsec\n");
    printf("%d\t%s\t%.2f\t%c\n", a.rollno, a.name, a.pre, a.sec);
    printf("%d\t%s\t%.2f\t%c\n", b.rollno, b.name, b.pre, b.sec);

    getch();
    return 0;
}