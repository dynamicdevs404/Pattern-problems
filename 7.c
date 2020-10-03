#include<stdio.h>
main()
{
    int d,d1,d2,m,m1,m2,y,y1,y2;
    printf("enter intial dates");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("enter current date");
    scanf("%d%d%d",&d2,&m2,&y2);
    if(d2<d1)
    {
        d2=d2+30;
        m2=m2-1;
        d=d2-d1;
    }
    else
        d=d2-d1;
    if(m2<m1)
    {
        m2=m2+12;
        y2=y2-1;
        m=m2-m1;

    }
    else
        m=m2-m1;
    y=y2-y1;
    printf("age is %d  %d  %d",d,m,y);
}
