#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "emp.h"

int main()
{
	EMP E1,E2;

	ipEMPDetails(&E1);

	ipEMPDetails(&E1);

	display(E1);
	display(E2);

	printf("\n\n");
	return 0;
}
