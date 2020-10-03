#include<stdio.h>
int main()
{
    int n,num,i,j,k,pos;
    printf("enter the no. of element");
    scanf("%d",&n);
    int a[n];
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(j=pos-1;j<n;j++)
    {
        a[j]=a[j+1];
    }
    n--;
    for(k=0;k<n;k++)
        printf("%d\t",a[k]);
}

