#include<stdio.h>
void main()
{
int n[20],i;
printf("the character array ");
for(i=0;i<10;i++)
{
scanf("%c",&n[i]);
}
for(i=0;i<=10;i++)
{
if((n[i]>='0')&&(n[i]<='19'))
{
printf("the numbers are %d:",n[i]);
}
}
}
