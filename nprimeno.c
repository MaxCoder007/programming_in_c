#include<stdio.h>

int main()
{
    int n,j;
    printf("Enter no of rows=");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
    for( j=2;j<=i;j++){
       if(i%j==0)
       {
           
           break;
       }
    
    }
    
       if(i==j){
        printf("%d",i);
    }
    }
    
   
return 0;
}