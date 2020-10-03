#include<stdio.h>
main()
{
    int i,j,p;
    for(i=0;i<5;i++)
    {
        p=0;
        for(j=0;j<=i;j++)
        {
            printf("%d ",p);
            p=p+i;
        }
        printf("\n");
    }
}
