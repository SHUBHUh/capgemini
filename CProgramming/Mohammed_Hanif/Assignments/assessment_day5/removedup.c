0#include<stdio.h>

int main()
{
	int arr[10],i,j,k,size;

	printf("Enter the size of array:\n");
	scanf("%d",&size);
	////input array//////////
	printf("Enter the elements in array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	////////find duplicate elements//////////
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			////////if any duplicate find////////
			if(arr[i] == arr[j])
			{
				////////delete the duplicate element/////
				for(k=j;k<size-1;k++)
				{
					arr[k] = arr[k+1];
				}
				//////decreasing size after removing element/////////
				size--;
				////////
				j--;
			}
		}
	}
	/////print array after deleting/////////
	printf("Array elements after deleting duplicate:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}