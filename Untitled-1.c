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
printf("Enter detials of 1st house=")
scanf("%d",&add[0].houseno);
scanf("%d"&add[0].block);
scanf("%C"&add[0].city);
scanf("%s",add[0].state);
    
}