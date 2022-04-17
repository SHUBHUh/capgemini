#include<stdio.h>
#include<stdlib.h>

void inputData(int *,int);
void printArray(int *, int );
void sortingArray(int *, int);


int main()
{
	int *a,n;
	printf("\nEnter the number of elements=\n");
	scanf("%d",&n);

	a=(int *)malloc(sizeof(int) * n);
		
        inputData(a,n);
	printf("\nBefore sorting=\n");
        printArray(a,n);
	printf("\nAfter Sorting=\n");
	sortingArray(a,n);
	printArray(a,n);
	printf("\n\n");
       return 0;
}

void inputArray(int *a, int n)
{
	int i;
	printf("\nEnter the elements in the array=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	
}

void printArray(int *a,int n)
{
	int i=0;
	printf("\n Elements in the array=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
}

void sortingArray(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if( *(a+i) < *(a+j) )
			{
				temp=*(a+i);
				*(a+i) = *(a+j);
				*(a+j)= temp;
			}
		}
	}
	
}

