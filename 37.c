#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the two number");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swapping the number %d%d",&a,&b);
return 0;
}
