#include<stdio.h>

int main()
{
	int a[50],i,Cap,Big;

	scanf("%d",&Cap);
	for(i=0;i<Cap;++i)
		scanf("%d",&a[i]);
	//find and print the leader in reverse order
	printf("%d ",a[Cap-1]);
	Big = a[Cap-1];
	for(i=(Cap - 2);i>=0;i--)
	{
		//printf("%d ",a[i]);
		if(Big < a[i])
		{
			printf("%d ",a[i]);
			Big = a[i];
		}
	}
	printf("\n\n");
}