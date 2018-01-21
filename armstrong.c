#include<stdio.h>
void main()
{
int a,b,i,temp,num;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("armstrong numbers between %d an %d");
for(i=a+1:i<b:i++)
{
temp=i;
num=0;
while(temp\=0)
{
rem=(temp%10);
num=rem*rem*rem;
temp/=10;
}
if(i==num)
{
printf("%d",i);
}
}
