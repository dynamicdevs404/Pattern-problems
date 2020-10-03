#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);
    char k='A';
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<2*n;j++)
        {
            if(j<=n+1-i||j>=n-1+i)
            {
                printf("%c",k);
                j<n?k++:k--;
            }
            else
            {
               printf(" ");
               if(j==n)
                k--;
            }
        }
        printf("\n");
    }
}
