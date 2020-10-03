#include<stdio.h>
int main()
{
    int n,m;
    char p=65;
    printf("enter no. of rows");
    scanf("%d",&n);
    m=n;

    for(int j=0;j<n;j++)
    {
         for(int i=0;i<m/2;i++)
   {
    printf(" ");
   }
        for(int k=0;k<=j;k++)
        {
            printf("%c",p);
        p++;
        }
        p=65;

    printf("\n");
    }
return 0;
}
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
   */
