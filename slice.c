#include <stdio.h>
#include <string.h>

void slice(char str[], int n, int m);

int main()
{
    char str[25];
    int n, m;

    printf("Enter a string: ");
    fgets(str, 25, stdin);

    printf("Enter numbers to slice: ");
    scanf("%d%d", &n, &m);

    // Ensure n and m are within the bounds
    int strlen = strlen(str);
    if (n >= 0 && m < strlen && n <= m)
    {
        slice(str, n, m);
    }
    else
    {
        printf("Invalid indices\n");
    }
}

void slice(char str[], int n, int m)
{
    int i;
    char str2[25]; // Increased the buffer size
    int j = 0;

    for (i = n; i <= m; i++, j++)
    {
        str2[j] = str[i];
    }
    str2[j] = '\0'; // Properly null-terminate the string
    puts(str2);
}
