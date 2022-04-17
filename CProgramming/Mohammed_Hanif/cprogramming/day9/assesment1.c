/*find the average salary of the employees in an orgainisation.
find the highest salary and print his/her details
find the lowest salary and print the details
DMA
*/
#include<stdio.h>
#include<string.h>
#include "empdetails.h"

int main()
{
	//EMP E1,E2;
	EMP E[3];
	int i;
	float avg;
	for(i= 0 ;i<3;i++)
	{
		ipEMPDetails(&E[i]);
		avg = avg + (float)E[i].empSal;
	}


	for(i= 0 ;i<3;i++)
	{
		display(E[i]);
	}
	printf("Avg= %f",avg/3.0);

	printf("\nHighest =%d",highSal(E,3));
	printf("\nLowest =%d",lowSal(E,3));

	printf("\n\n");
	return 0;
}

