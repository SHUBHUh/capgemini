/*
Q) Program to Check if product of digits of a number at even and odd places is equal.
*/


#include<stdio.h>

int main()
{
	int n,r,p1=1,p2=1,c=0;
	
	printf("\n Enter A Number : ");
	
	scanf("%d", &n);
	
	while(n!=0)
	{
		c++;
		r=n%10;
		if (c%2==0)
		p1=p1*r;
		else
		p2=p2*r;

		n=n/10;
	}
	printf("%d %d",p1,p2);
	
	if(p1==p2)
		printf("\n Yes: %d %d",p1,p2);
	else
		printf("\n No: %d %d",p1,p2);


return 0;	

}







/*
Q) Write a program to Check whether product of digits at even places is divisible by sum of digits at odd place of a number.
*/


#include<stdio.h>
int main ()
{
	int num;
	
	printf("Enter A Number : ");
	scanf("%d",&num);
	
	int r=0, count=0, pro=1, sum=0;
	int rev=0, num1=num;

	while(num > 0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
		count++;
	}

for (int i=1; i<=count; i++)
{
	r=rev%10;  
	if(i%2==0)
	pro=pro*r;
	else
	sum=sum+r;
	rev=rev/10;  
}
printf("\n Sum is : %d \n Product is : %d",sum,pro);

if(pro%sum==0)
	printf("\n True ");
else
	printf("\n False ");


return 0;

}