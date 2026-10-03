#include<stdio.h>
#include<math.h>

int main()
{
int i,n;
float x[20],sum=0.0,sum1=0.0,mean,mode,deviation;

printf("Enter number of terms=");
scanf("%d",&n);
printf("Enter %d real values\n",n);
for(i=0;i<n;i++){
    scanf("%f",(x+i));
}
for(i=0;i<n;i++){
    sum=sum+*(x+i);
}
mean=sum/n;

for(i=0;i<n;i++){

    sum1=sum1+(*(x+i)-mean)*(*(x+i)-mean);
}
mode=sum1/n;
deviation=sqrt(mode);
printf("mean=%f\n",mean);
printf("veriation=%f\n",mode);
printf("deviation=%f",deviation);
return 0;


}