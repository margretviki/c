#include<stdio.h>
int  main()
{
	int a;
	int b;
	printf("enter the two value before swapping &a,&b");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
	}
}
