//Write a c program to print alphabet triangle.

#include<stdio.h>
int main()
{
    int r,c,sp;
    
    r = 1;
    while(r<=5)
    {
        sp = 4;
        while(sp>=r)
        {
            printf(" ");
            sp--;
        }
        
        c=1;
        while(c<=r)
        {
            printf("%c", c+64);
            
            c++;
        }
        
        c = c-2;
        while(c>=1)
        {
            printf("%c", c+64);
            
            c--;
        }
        
        printf("\n");
        r++;
    }
}  



//write a program to read Sum and Product of digits in a given number

#include <stdio.h>
  
int main()
{
    int n;
    int a, sum,pro;
     
    printf("\nEnter an integer number :");
    scanf("%d",&n);
  
    //Calculating Sum and Product
    sum=0;
    pro=0;
     
    while(n>0)
    {
        a=n%10; 
        sum = sum+a;
        pro = sum-a;
        n=n/10;
    }
     
    printf("\nSUM = : %d",sum);
    printf("\nPRODUCT = : %d",pro);
     
    return 0;
}





/*Write a program to Count number of ways to divide a number
 in 4 parts.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
        /* code */

        int num=5;
        int i,j,k,l, count=0;
        if(num >3){
        for(i=1;i<num;i++)
        {
                for(j=i;j<num;j++)
                {
                        for(k=j;k<num;k++)
                        {
                                for(l=k;l<num;l++)
                                {
                                        if((i+j+k+l)==num)
                                        {
                                                printf("\n%d + %d + %d + %d = %d",i,j,k,l,num);
                                                count++;
                                        }

                                }
                        }
                }
        }
        }

        printf("\nCount = %d\n",count);
        return 0;
}