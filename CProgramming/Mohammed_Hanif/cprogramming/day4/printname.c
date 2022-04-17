#include<stdio.h>
int main()
{
	char ch='A';
	int count=1;
	//int a = 72,b = 65,c = 78,d = 73,e = 70;
	int x;
	while(count<=26)
	{
		printf("%c = %d\n",ch,ch);
		ch++;
		count++;
	}

	printf("\nEnter integer:\n");
	scanf("%d",&x);
	if(ch==x)
/*	for(int i = 5;i >= x;i++)
	{
		scanf("%d",&x);
	}*/
	printf("%c",x);


	//printf("\n%c%c%c%c%c\n",a,b,c,d,e);

	//printf("\n%c%c%c%c%c",72,65,78,73,70);
}