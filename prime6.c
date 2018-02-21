#include<stdi.h>
#include<conio.h>
void main()
{
int n,if=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
}
if(flag==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
}
