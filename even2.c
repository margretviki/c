#include<stdio.h>
intmain()
{
intx,y,rem;
printf("give the first no for the range:\n");
scanf("%d",&x);
printf("give the final number the range:\n");
scanf("%d",&y);
printf("\n the even number between%dand%dare"x,y);
for(i=x;i,y;++i)
{
rem=i%2;
if(rem==0)
printf("\n%d",i);
}
return 0;
}

