#include<stdio.h>
void main()
{
	int a[10][2],n,i;
	printf("enter how many rows in kabali's ninja clan\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			scanf("%d %d",&a[i][0],&a[i][1]);
		}
	for(i=0;i<n;i++)
	{ 
	if(a[i][0]>a[i][1])
  {
		printf("%d\n",a[i][0]-a[i][1]);
    }
	else if(a[i][0]<a[i][1])
  {
		printf("%d\n",a[i][1]-a[i][0]);
    }
    }
    
