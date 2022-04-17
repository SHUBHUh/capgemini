#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int i,j,k,sum =0;
	int result[20][20];
	int arr1[ROW][COL] = {{1,2,3},{4,5,6}};
	int arr2[ROW][COL] = {{1,2,3},{4,5,6}};

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			for(k=0;k<3;k++)
			{
				sum =sum+ arr1[i][j] * arr2[k][j];

			}
			result[i][j] = sum;
			printf("Matrix result:%d",result[i,j]);

		}
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COL;j++)
			{
				printf("%d\t",result[i][j]);
				printf("\n");
			}
		}
	}
}