#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float rp,ip,r1,r2,d;
    printf("Enter coeff=");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    {
        printf("invalid i/p");
    }
else{
    d=b*b-4*a*c;
    if(d==0){
        printf("r is reaal and equal");
        r1=r2=-b/(2*a);
        printf("\nroot1=%.2f\nroot2=%.2f",r1,r2);
    
    }
    if(d>0){
        printf("real and distant");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
          printf("\nroot1=%.2f\nroot2=%.2f",r1,r2);
    }
    if(d<0){
        printf("complex and distant");
        rp=-b/(2*a);
    d=-d;
        ip=sqrt(d)/(2*a);
          printf("\nroot1=%.2f+i%.2f\n",rp,ip);
          printf("root2=%.2f-i%f",rp,ip);
    }
}
return 0;
}