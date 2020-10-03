#include<stdio.h>
main()
{
    int k,i,m=0,j;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=m;k++)
            printf(" ");
        m++;
        for(j=i;j<=5;j++)
            printf("*");
        printf("\n");
    }
}

