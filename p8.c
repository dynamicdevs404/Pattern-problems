#include<stdio.h>
main()
{
    int i,j,m=5,p,k,a=5,q=1;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=m;j++)
            printf("*");
        m--;
        for(k=1;k<q;k++)
            printf(" ");
            q+=2;
        for(p=a;p<=9;p++)
            printf("*");
        a++;
        printf("\n");
    }

}
