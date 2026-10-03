#include<stdio.h>

struct address{
int houseno;
int block;
char city[25];
char state[25];

}add;

void printadd(struct address add);
int main()
{

struct address add[5];
printf("Enter detials of 1st house=");
scanf("%d",&add[0].houseno);
scanf("%d",&add[0].block);
scanf("%s",add[0].city);
scanf("%s",add[0].state);
    printf("Enter detials of 2nd house=");
scanf("%d",&add[1].houseno);
scanf("%d",&add[1].block);
scanf("%s",add[1].city);
scanf("%s",add[1].state);
printf("Enter detials of 3rd house=");
scanf("%d",&add[2].houseno);
scanf("%d",&add[2].block);
scanf("%s",add[2].city);
scanf("%s",add[2].state);
printf("Enter detials of 1st house=");
scanf("%d",&add[3].houseno);
scanf("%d",&add[3].block);
scanf("%s",add[3].city);
scanf("%s",add[3].state);
printadd(add[0]);
printadd(add[1]);
printadd(add[2]);
printadd(add[3]);

}
void printadd(struct address add)
{
printf("\nHouseno\tblock\tcity\tstate\n");
printf("%4d\t%4d\t%4s\t%4s\n",add.houseno,add.block,add.city,add.state);

}