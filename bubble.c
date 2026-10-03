#include <stdio.h>
#define maxsize 5
void bubble(int arr[]);

int main()
{
    int arr[maxsize];
    printf("Enter array elements=");
    for (int i = 0; i < maxsize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your data=");
    for (int i = 0; i < maxsize; i++)
    {
        printf("%d", arr[i]);
    }

    bubble(arr);

    return 0;
}

void bubble(int arr[])
{
    int temp, j, a;
    for (int i = 1; i < maxsize; i++)
    {
        for (j = 0; j < maxsize - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("\niteration%d=", i);
        for (a = 0; a < maxsize; a++)
        {
            printf("%d", arr[a]);
        }
    }
    printf("\narrey after sorting=");
    for (int b = 0; b < maxsize; b++)
    {
        printf("%d", arr[b]);
    }
}