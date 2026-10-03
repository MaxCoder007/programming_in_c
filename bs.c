#include<stdio.h>

int main()
{
    int n,arr[20];
    printf("Enter number ofarray =");
    scanf("%d",&n);
     printf("Enterim increasing order array =");
     for(int i=0;i<n;i++)

     {
      scanf("%d",&arr[i]);
     }
     int key;
printf("Enter element to be find=");

scanf("%d",&key);
int s=0,e=n,mid;
while (s<=e)

{
    mid=(s+e)/2;
    if(arr[mid]==key){
        printf("Element found");
        break;
    }
else{
    if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}

}
if(arr[mid]!=key){
    printf("Element not found");
}
return 0;
}