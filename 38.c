#include<stdio.h>
int main()
{
int i=50;
k=50;
printf("value of i=%d k=%d before swap",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("value of i=%d k=%d after swap",i,k);
return 0;
}
