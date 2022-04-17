/*

 demo on if, if-else,nested if else, else if ladder

 */

#include<stdio.h>

int main()
{
	int val1,val2;

	scanf("%d%d",&val1,&val2);

	printf("\n Address of val1 in memory:%u",&val1);
	printf("\n Address of val2 in memory:%u",&val2);
	printf("\nStart of checking\n");

	if(val1>val2)
	{
		printf("\nVal1 is biggest\n");
	}
	else
	{
		printf("\nVal2 is biggest\n");
		printf("Hanif checking");
	}
	printf("\nEnd of program\n");
	return 0;
}