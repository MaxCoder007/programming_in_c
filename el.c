#include<stdio.h>
int main()
    {
     char name[25];
     float unit, emt;
     printf("Enter name and unit");
     scanf("%s%f",name,&unit);
     
     if(unit<=200){
      emt=unit*0.80+100;
     }
     else{
      if(unit>=200&&unit<=300){
        emt=200*0.80+((unit-200)*0.90)+100;
      }
      else
      {
        emt=200*0.80+((unit-200)*0.90)+((unit-300)*1)+100;
      }
     }
     if(unit>400){
      emt=1.15*emt;
     }
     printf("name=%s\namount=%f",name,emt);
     return 0;
      }