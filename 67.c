#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number");
scan("%d",&a);
while((a%10)!=0)
{
a++;
}
printf("the multiple nearest is %d",a);
}
