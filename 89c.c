#include<stdio.h>
#include <string.h>

int main()
{
    int a,b;
    char str[10][50], temp[50];

    printf("\nEnter 10 words:: \n");

    for(i=0; i<10; ++i)
        scanf("%s[^\n]",str[a]);


    for(i=0; i<9; ++i)
        for(j=i+1; j<10 ; ++j)
        {
            if(strcmp(str[a], str[b])>0)
            {
                strcpy(temp, str[a]);
                strcpy(str[a], str[b]);
                strcpy(str[b], temp);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=0; i<10; ++i)
    {
        puts(str[a]);
    }

    return 0;
}
