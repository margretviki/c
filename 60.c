#include<stdio.h>
int main()
{
int a,b,c,i,temp;
printf("enter the number of terms");
scanf("%d",&temp);
a=0;b=1;c=0;
printf("fibonaci terms:\n");
for(i=1;i<=terms;i++)
{
printf("%d",c);
a=b;
b=c;
c=a+b;
}
return 0;
}
