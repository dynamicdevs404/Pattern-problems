#include<stdio.h>
int main()
{
    int m=5;                           /*1 2 3 4 5
                                         1 2 3 4
                                         1 2 3
                                         1 2
                                         1*/
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=m;j++)
            printf("%d  ",j);
        printf("\n");
    m=m-1;
    }

return 0;

}

