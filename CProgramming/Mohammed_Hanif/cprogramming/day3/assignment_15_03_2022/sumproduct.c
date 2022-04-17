#include <stdio.h>
  
int main()
{
    int n;
    int dig, sum,pro;
     
    printf("\nEnter an integer number :");
    scanf("%d",&n);
  
    /*Calculating Sum and Product*/
    sum=0;
    pro=1;
     
    while(n>0)
    {
        dig=n%10; /*get digit*/
        if(dig!=0)
        {
            sum+=dig;
            pro*=dig;
        }
        n=n/10;
    }
     
    printf("\nSUM of all Digits is : %d\n",sum);
    printf("\nPRODUCT of all digits: %d\n",pro);
     
    return 0;
}