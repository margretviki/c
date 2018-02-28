#include<stdio.h>
void main()
{
int b,c;
printf("enter the number");
scanf("%d",&b);
while(b!=0)
{
k=b%10;
if((k%2)!=0)
printf("odd no is %d",k);
b=b/10;
}
}
