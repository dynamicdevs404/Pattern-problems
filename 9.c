
#include<stdio.h>
int main()
{
int n,t1=0,t2=1,nextTerm;
printf("enter the number of terms");
scanf("%d",&n);
printf("fibonacci series is \n");
for(int i=1;i<n;i++)
{

    printf("%d,  ",t1);
    nextTerm=t1+t2;
    t1=t2;
     t2=nextTerm;
 }
 return 0;
}
