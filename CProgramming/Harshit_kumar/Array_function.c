#include<stdio.h>
#include<stdlib.h>

void readArray(int *,int);
void dispArray(int *, int );
void sortArray(int *, int);


int main()
{
	int *a,n;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);

	a=(int *)malloc(sizeof(int) * n);
		
        readArray(a,n);
	printf("\n==================Before sorting===================\n");
        dispArray(a,n);
	printf("\n==================After Sorting====================\n");
		sortArray(a,n);
	printf("\n\n");
       return 0;
}

void readArray(int *a, int n)
{
	int i;
	printf("\nEnter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
}
void dispArray(int *a,int n)
{
	int i;
	printf("\n Elements in the array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	
}

void sortArray(int *a,int n)
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
	dispArray(a,n);
	
}