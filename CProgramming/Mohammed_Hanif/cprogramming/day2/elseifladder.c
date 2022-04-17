/*
	find a given nummber if presenft in the else if ladder
	*/

#include<stdio.h>

int main()
{
	int a=10,b=20,c=30,d=40,e=50;
	int num;

	scanf("%d",&num);

	if(num == a)
		printf("/nNumber is present in a\n");
	else if(num == b)
		printf("\nNumber is present in b\n");
	else if(num == c)
		printf("\nNumber is present in c\n");
	else if(num == d)
		printf("\nNumber is present in d\n");
	else if(num == e)
		printf("\nNumber is present in e\n");
	else
		printf("\n Number is not in the list\n");

	printf("\nProgram ended\n");

	return 0;
}