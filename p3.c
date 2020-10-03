#include<stdio.h>
main()
{
    int p,m=4,j,k;
    for(p=1;p<=8;p++)
    {
        for(k=1;k<=m;k++)
            printf(" ");
        m--;
        for(j=1;j<=p;j++)
            printf("*");
        printf("\n");
    }
}
