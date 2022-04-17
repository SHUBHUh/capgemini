#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr,*temp;
	int sumodd,sumeven;
	ptr = (int *)malloc(sizeof(int)*10);
	printf("Enter the dynamic elements:\n");

	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	//temp =ptr;
	if(ptr == NULL)
	{
		printf("\nError in allocation\n");
		exit(1);
	}

	for(i=0;i<10;i++)
	{
		if(*(ptr+i)%2 == 1)
			sumodd+=*(ptr+i);
		else
			sumeven+=*(ptr+i);
	}
	printf("sumodd = %d and sumeven=%d",sumodd,sumeven);
	free(ptr);
	return 0;
}