#include<stdio.h>
void main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
switch(ch)
{
case'a';
case'A';
case'e';
case'E':
case'i';
case'I';
case'o';
case'O';
case'u';
case'U';
prinf("/n %c is  a vowel",ch);
break;
default;
printf("/n %c is not a vowel",ch);
break;
}
getch();
retrun 0;
}

