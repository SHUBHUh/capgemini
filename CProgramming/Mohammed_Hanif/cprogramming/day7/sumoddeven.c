#include<stdio.h>
#define NUM 10
int main()
{
	int i;

	int arr[NUM] = {1,2,3,4,5,6,7,8,9,10};
	int sumodd,sumeven;
	for(i=0;i<NUM;i++)
	{
		if(arr[i]%2 == 1)
			sumodd+=arr[i];
		else
			sumeven+=arr[i];
	}
	printf("sumodd = %d and sumeven=%d",sumodd,sumeven);
}