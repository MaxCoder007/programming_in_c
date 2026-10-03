#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10],m,n,x,y;

    printf("enter the order of 1st matrix=");
    scanf("%d%d",&m,&n);
 printf("enter the order of 2nd matrix=");
    scanf("%d%d",&x,&y);
    if(n!=x){
        printf("mulpilicatin is not possible");
    }
else{

    printf("Enter 1st matrtix=\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter 2nd matrtix=\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&b[i][j]);
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
             c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     printf("1st matrtix=");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     printf("2nd matrtix=");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("product of two matrix is=\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
}
return 0;
    
}