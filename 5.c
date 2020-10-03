#include<stdio.h>
#include<math.h>
int main()
{

    int i,c=0,n,t,n1,n2,t1,b=0,t4,s2=0,n3;
    printf("enter any binary no.");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0)
    {

        t=t%10;
        c=c+1;
        n=n/10;
    }
    for(i=0;i<=c;i++)
    {
        t1=n1%10;
        b=b+pow(2,i)*t1;
        n1=n1/10;
    }
    printf("\nBinary to decimal is %d",b);
    int t2,s=0;
    printf("\nEnter any decimal number");
    scanf("%d",&n2);
    while(n2!=0)
    {
        t2=t2%2;
        s=s*10+t2;
        n2=n2/2;
    }
    n3=s;
    while(n3!=0)
    {
        t4=n3%10;
        s2=s2*10+t4;
        n3=n3/10;

    }
    printf("Decimal to binary is %d",s2);
     return 0;
}
