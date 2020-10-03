#include<stdio.h>
void main()
{

    int i,j,k,l=5,m;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=l;j++)
            printf("*");
            l--;
        for(k=l+2;k<9-l;k++)
            printf(" ");
        for(m=k;m<=9;m++)
            printf("*");
        printf("\n");

    }
}
