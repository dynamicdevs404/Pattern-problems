#include<stdio.h>
int main()
{
    int n,num,i,j,k,pos;
    printf("enter the no. of element");
    scanf("%d",&n);
    int a[n];
    printf("enter the position");
    scanf("%d",&pos);
     printf("enter the element to be inserted");
    scanf("%d",&num);

    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=pos-1;j--)
    {
        a[j+1]=a[j];
    }
    a[pos-1]=num;
    n++;
    for(k=0;k<n;k++)
        printf("%d\t",a[k]);
}
