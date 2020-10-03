#include<stdio.h>
main()
{
    int m=3,p=1,q;
    for(int i=1;i<=4;i++)
    {
        int r=i-1;

        for(int j=1;j<=m;j++)
            printf(" ");
        m--;
        for(int k=i;k<=p;k++)
            printf("%d",k);
        for(int x=1;x<q;x++)
        {
            printf("%d",r);
            r--;
        }
        q++;

            printf("\n");

        }


    }


