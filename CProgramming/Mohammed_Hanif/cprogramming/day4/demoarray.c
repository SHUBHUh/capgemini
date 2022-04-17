#include<stdio.h>

int main()
{
	int a=10;
	int b[2] = {1,2};
	int c = 30;

	printf("\n Address of a= %u and its value %d\n",&a,a);
	printf("\n Address of b[0]= %u and its value %d\n",&b[0],b[0]);
	printf("\n Address of b[1]= %u and its value %d\n",&b[1],b[1]);
	printf("\n Address of c= %uand its value %d\n",&c,c);

	printf("\n%d %d\n",b[-1],b[2]);

	return 0;
}