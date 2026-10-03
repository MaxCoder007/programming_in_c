#include <stdio.h>
#include <stdlib.h>
int len(char str[]);
int com(char str1[], char str2[]);
void con(char str1[], char str2[]);
void con(char str1[], char str2[])
{
    int l = len(str1), i;
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[l + i] = str2[i];
    }
    str1[l + i] = '\0';
    printf("\nThe contracted string is=");
    puts(str1);
}
int com(char str1[], char str2[])
{
    int flag;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}
int len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    return i;
}

int main()
{
    char s1[50], s2[50];
    printf("Enter 1st string=");
    fgets(s1, 50, stdin);
    printf("Enter 2nd string");
    fgets(s2, 50, stdin);

    printf("Length of 1st string=%d", len(s1));
    printf("\nLength of 2nd string=%d", len(s2));
    if (com(s1, s2) == 1)
    {
        printf("\nBoth  the strings are same");
    }
    else
    {
        printf("\nBoth  the strings are different");
    }
    con(s1, s2);

    return 1;
}