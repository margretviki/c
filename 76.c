#include<stdio.h>
#include<conio.h>
void main()
{
int m,n=0,i;
printf("enter the value");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
if(m%i==0)
{
printf("prime");
}
else
{
printf("composite number");
}
}
