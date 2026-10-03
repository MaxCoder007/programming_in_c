
#include <stdio.h>

int main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        goto HKI; // Consistent label case
    }
    
    printf("Positive\n"); // Added newline for better output format
    return 0;

HKI: // Consistent label case
    printf("Negative\n"); // Informing that n is negative
    return 0;
}
