#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("the value is even %d",c);
}
else
{
printf("the value is odd%d",c);
}
return 0;
}
