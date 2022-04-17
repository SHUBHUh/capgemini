/*

demo on for loop

for(intit sec;cond sec;counter){
	for block of sts
}
*/
#include<stdio.h>
int main()
{
	int i,j;
	/*
	i=1
	while(i<=10
	{
		printf("%d",i);
		i++;
	}*/
	for(i=1,j=10;(i<10)&&(j<=15);i++,++j)
	{
		printf("\n%d %d\n",i,j);
	}
	printf("\ni=%d\n",i);
}