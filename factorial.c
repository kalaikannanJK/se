#include<stdio.h>
void main()
{
int i,f=1;num;
printf("enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
f=f*i;
}
printf("the factorial of %d is%d",num);
}
