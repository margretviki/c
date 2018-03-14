#include <stdio.h>
int main()
{
	int n1,n2,i;
	char s;
  clrscr();
	printf("\n enter the two numbers:\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&n1,&sym,&n2);
		if(s=='/')
		{
			printf("%d\n",n1/n2);
		}
		else
		{
			printf("%d\n",n1%n2);
		}
	}
  getch();
	return 0;
}
