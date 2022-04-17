#include<stdio.h>
#include<stdlib.h>
int sorting(int *ptr,int num);
int inputfuc(int *ptr, int num);

int i,j,num1;

int main()
{
	int *ptr;
	int num;
	printf("\nEnter a number: ");
	scanf("%d",&num);

	ptr = (int *)malloc(sizeof(int)*num);

	if(ptr==NULL)
	{

		printf("\nError in allocation..");
		exit(1);
	}
	inputfuc(ptr,num);

	sorting(ptr,num);

	
	return 0;
}
int inputfuc(int *ptr , int num)
{
	for(i=0; i<num; i++)
	{
		printf("\nEnter a data : ");
		scanf("%d",(ptr+i));
	}
	for(i=0; i<num; i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");

	
}
int sorting(int *ptr,int num)
{

	//int num1;
	for(i=0; i<num; i++)

	{
		for(j=i+1; j<num; j++)
		{
			if((*(ptr+i)) > (*(ptr+j)))
			{

				num1 = *(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=num1;
			}
		}
	}
	printf("\n");
	for(i=0; i<num; i++)
	{
		printf("%d ",*(ptr+i));
	}
	
}


