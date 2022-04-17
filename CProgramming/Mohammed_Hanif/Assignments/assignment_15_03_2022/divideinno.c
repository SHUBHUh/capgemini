#include<stdio.h>

int main()
{
	int num;
	int i,j,k,l,count=0;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>3)
	{
		for(i = 1;i < num;i++)
		{
			for(j = i;j < num;j++)
			{
				for(k = i;k < num;k++)
				{
					for(l= i;l < num;l++)
					{
						if((i+j+k+l)==num)
						{
							printf("\n %d + %d + %d + %d",i,j,k,l,num);
							count++;
						}
					}
				}
			}
		}
	}
	printf("\n Count number %d\n",count);
	return 0;
}

