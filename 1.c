
#include<stdio.h>
main()
{
int n,n1,temp,s=0;
printf("enter any number");
scanf("%d",&n);
n1=n;
while(n>0)
{
    temp=n%10;
    s=temp*temp*temp+s;
    n=n/10;

}
if(n1==s)
    printf("armstrong");
else
    printf("not armstrong");
}
