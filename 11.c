#include<stdio.h>
main()
{
    int n,temp,n1,s=0;
    printf("enter any number");
    scanf("%d",&n);
    n1=n;
    while(n>0)
          {
              temp=n%10;
              s=s*10+temp;
              n=n/10;
          }
         if(n1==s)
             {

              printf("palindrome");
             }
                else
                printf("not palindrome");


          }
