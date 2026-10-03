#include<stdio.h>

int main(){
int arr[6]={1,2,3,4,5},poss=1,key=9;
int i;
for( i=5-1;i>=poss;i--){
  arr[i+1]=arr[i];

}
arr[poss]=key;

for(int i=0;i<6;i++){
  printf("%d",arr[i]);
}
}