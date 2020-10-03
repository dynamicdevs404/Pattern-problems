#include<stdio.h>
#include<math.h>
int main()
{
int d,m,y,s,r,c;

printf("enter the date\n");
scanf("%d",&d);
printf("enter the month\n");
scanf("%d",&m);
printf("enter the year\n");
scanf("%d",&y);
r=y%100;

    if(y%400>=0&&y%400<100)
        c=6;
    else
        if(y%400>=100&&y%400<200)
        c=4;
    else
        if(y%400>=200&&y%400<300)
        c=2;
    else
        if(y%400>=300&&y%400<400)
        c=0;


switch(m)
{
case 1: s=(r+r/4+d+0+c)%7;
            break;
case 2:  s=(r+r/4+d+3+c)%7;
         break;
case 3: s=(r+r/4+d+3+c)%7;
         break;
case 4: s=(r+r/4+d+6+c)%7;
            break;
case 5:  s=(r+r/4+d+1+c)%7;
         break;
case 6: s=(r+r/4+d+4+c)%7;
         break;
case 7: s=(r+r/4+d+6+c)%7;
            break;
case 8:  s=(r+r/4+d+2+c)%7;
         break;
case 9: s=(r+r/4+d+5+c)%7;
         break;
case 10: s=(r+r/4+d+0+c)%7;
            break;
case 11:  s=(r+r/4+d+3+c)%7;
         break;
case 12: s=(r+r/4+d+5+c)%7;
         break;
default:printf("Enter month from 1 to 12");
}
switch(s)
{
    case 0:printf("Sunday");
    break;
    case 1:printf("Monday");
    break;
    case 2:printf("Tuesday");
    break;
    case 3:printf("Wednesday");
    break;
    case 4:printf("Thursday");
    break;
    case 5:printf("Friday");
    break;
    case 6:printf("Saturday");
    break;
}
}

