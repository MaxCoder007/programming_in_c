#include <stdio.h>

int main()
{
    int n;
    float sum=0.0;
    printf("Enter number of subject=");
    scanf("%d",&n);
    float arr[n],avg;
    printf("enter subject marks=");
    for(int i=0;i<n;i++)
    {
        
        scanf("%f",&arr[i]);
       
    }
            for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
        
        avg=sum/n;
        printf("sum=%f avg=%f",sum,avg);
    
    return 0;
}