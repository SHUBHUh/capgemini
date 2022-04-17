#include<stdio.h>
#include "addition.h"
#include "difference.h"
#include "multiplication.h"
#include "division.h"

int main()
{
	int v1,v2;
	int sum = 0,sub = 0,multi = 0,divide = 0;

	printf("\n Enter the two value v1 ,v2:\n");
	scanf("%d%d",&v1,&v2);

	sum = add(v1,v2);
	sub = diff(v1,v2);
	multi = mul(v1,v2);
	divide = div(v1,v2);

	printf("Addition of two number:%d\n",sum);
	printf("Difference of two number:%d\n",sub);
	printf("Multiplication of two number:%d\n",multi);
	printf("Division of two number:%d\n",divide);
	return 0;
}
