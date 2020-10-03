#include<stdio.h>
main()
{
    int i,j,m=4,n=1,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=m;j++)
            printf(" ");
        m--;
        for(k=1;k<=n;k++)
            printf("*");
        n+=2;
        printf("\n");
    }
}
