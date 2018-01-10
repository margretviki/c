#include<stdio.h>
#include<conio.h>
char a,b,c;
scanf("%c",&a);
b=(a=='a')||(a=='e')||(a=='o')||(a=='u');
c=(a=='A')||(a=='E')||(a=='O')||(a=='U');
if(b||c)
{
printf("vowel");
}
else
{
printf("not vowel");
}
