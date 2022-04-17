#include<stdio.h>
#define SIZE 5

int sorting(int []);
int display(int []);
int main()
{
	int i;
	int arr[SIZE] = {20,50,30,4,2};
	printf("\nArray elements: ");
	for(i=0;i<SIZE;i++)
			printf("%d\t",arr[i]);
	sorting(&arr[0]);
}
int sorting(int arr[])
{
	int i,j, temp;
	for(i=0;i<SIZE;++i)
	{
		for(j = i+1;j<SIZE;++j)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i] = arr[j];
				arr[j]=temp;
			}
		}
	}
		display(&arr[0]);
}
int display(int arr[])
{
	int i;
	for(i=0;i<SIZE;++i)
	{
			printf("\n%d",arr[i]);
	}
}