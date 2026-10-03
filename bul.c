#include<stdio.h>
#define max 5
void bubble(int arr[]);
int main(){
    int arr[10];
    printf("Enter array elements=");
    for(int i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
    printf("your data=");
    for(int i=0;i<max;i++){
        printf("%d",arr[i]);
    }
   
        bubble(arr);
}
void bubble(int arr[])
{
    int t;
 for(int i=0;i<max;i++){
        for(int j=0;j<max-1-i;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        printf("\niteration number%d=",i+1);
        for(int a=0;a<max;a++){
            printf("%d",arr[a]);
        }
    }
    printf("sorted array=");
     for(int a=0;a<max;a++){
            printf("%d",arr[a]);
        }
}