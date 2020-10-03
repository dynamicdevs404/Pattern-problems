#include<stdio.h>
int main()
{   int N,u=0,l=0,a;
printf("enter the order of matrix");
scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {

        for(int j=1;j<=N;j++)
        {
        if(i>j)
        {
            scanf("%d",&a);
            if(a==0)
                u=u+1;
        }
        else
        if(i<j)
        {
            scanf("%d",&a);
            if(a==0)
                l=l+1;

        }
        else
            scanf("%d",&a);
        }
    }
    if(u>=(N*(N-1)/2))
        printf("upper triangular");
    else
    if(l>=N*(N-1)/2)
    printf("lower triangular");

}
