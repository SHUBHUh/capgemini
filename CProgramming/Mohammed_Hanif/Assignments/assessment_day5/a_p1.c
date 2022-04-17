/*
Assignment: to remove dup.. elements in an array
*/
#include<stdio.h>

int main()
{
	int arr[30],i,j,k,Cap;
	printf("\nEnter the Capacity of the array:\n");
	scanf("%d",&Cap);
	printf("Emter %d elements valued of the array\n");
	for(int i = 0;i < Cap;++i)
	{
		scanf("%d",&arr[i]);
	}
	//display elements
	for(int i = 0;i < Cap;++i)
	{
		printf("\narr[%d] = %d",i,arr[i]);

	}
	printf("\n\n");
	return 0;
}