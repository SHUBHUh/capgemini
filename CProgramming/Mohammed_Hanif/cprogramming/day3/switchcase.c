#include<stdio.h>

int main()
{
	/*code*/
	//int a=10,b=20,c=30,d=40,e=50;
	int val;

	scanf("%d",&val);
	printf("\nSearching starts\n");

	switch(val)
	{
		
		case 'A':
				printf("\n Value found in A\n");
				break;
		case 'B':
				printf("\n Value found in B\n");
				break;

		case 'C':
				printf("\n Value found in C\n");
				break;

		case 'D':
				printf("\n Value found in D\n");
				break;
		case 'E':
				printf("\n Value found in E\n");
				break;
		default:
				printf("\n Value not found int the list\n");
				break;
	}

	printf("\nProgram Ends \n");

}