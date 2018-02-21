#include <stdio.h>
#include<string.h>
int main()
{
    char c[10]="hi madam";
    int i;
    int count=0;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
    
        count++;
    }
    printf("%d",count+1);
}
