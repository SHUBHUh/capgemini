#include<stdio.h>
int main()
{
	int n,rev=0,rem,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev *10+rem;
		n=n/10;
	}
	printf("Reversed number= %d\n",rev);
	if(temp == rev){
		printf("polyinrome\n");
	}
	else
	{
		printf("non polyinrome\n");
	}

	return 0;
}