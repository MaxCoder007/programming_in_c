#include<stdio.h>

int main()
{
    int n, arr[10], n2, n1;

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter array elements= ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element number to be replaced = ");
    scanf("%d", &n2);
    
    printf("Enter the new element value = ");
    scanf("%d", &n1);
    
    arr[n2] = n1;
    n--;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
