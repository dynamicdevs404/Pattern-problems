#include<stdio.h>
int main()
{
    int n,m,s,coef=1,p=1;
    printf("enter no. of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int s=i+1;s<=n-1;s++)
         {
             printf("  ");
         }
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
                coef=1;
            else
                coef=coef*(i-j+1)/j;
                printf("%4d",coef);
        }
        printf("\n");
    }
    return 0;

}
/*PASCAL TRIANGLE*/
