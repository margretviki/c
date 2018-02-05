#include<stdio.h>
#incude<conio.h>
int main()
{
int m,n;char a[20],b[20];
printf("enter the value of a and b");
scanf("%s %s",&a,&b);
m=strlen(a);
n=strlen(b);
if(m>=n)
{
printf("%s",a);
}
else
{
printf("%s",b);
}
return 0;
}
