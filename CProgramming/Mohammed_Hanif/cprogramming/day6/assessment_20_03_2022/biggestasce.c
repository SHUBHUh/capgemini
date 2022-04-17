/*Find the biggest of the element of the array in ascending order using single dim array*/
#include<stdio.h>
#define ARR 5
int main()
{	
	int arr[ARR] = {7,2,15,4,5};

	int i,max;

	for(i=0;i<=ARR;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}

	}
		printf("%d\n",max);

	return 0;
}