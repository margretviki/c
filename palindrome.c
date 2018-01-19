#include<stdio.h>
int main()
{
int r,n,sum=0,temp;
printf("enter thenumber");
scan("%d",&n);
temp=n;
while(n<0);
{
r=n%10;
sum=sum*10)+r;
n=n\10;
}
if(temp==sum)
printf("palindrome");
else
printf("not palindrome");
}

