#include <stdio.h>
int main()
{
    int n = 5, arr[6] = {2, 4, 6, 9, 0}, poss, num = 8;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > num)
        {
            poss=j;
            for (int i = n - 1; i >=poss; i--)
            {
                arr[i + 1] = arr[i];
                
            }
             arr[poss] = num;
        n++;
        break;
        }
       
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}