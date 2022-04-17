/*

2 dim array of int/float/double

int op[ROW][COL]

int op[2][3]; => 2*3=> diff elements are present = 6 ints are present

6 ints -> 6*4 = 24 bytes are consumed/allocated in consigative

2000 2001 2002 2003 
<------int 1------>

2004 2005 2006 2007 
<------int 2------>

2008 2009 2010 2011
<------int 3------> 

2012 2013 2014 2015
<------int 4------> 

2016 2017 2018 2019
<------int 5------>

2020 2021 2022 2023
<------int 6------>

       COL1 COL2 COL3
ROW1=> 2000 2004 2008 

ROW2=> 2012 2016 2020



int op[2][3] = {{10,20,30},{40,50,60}};

       COL1 COL2 COL3
ROW1=> 2000 2004 2008 
        10   20   30
ROW2=> 2012 2016 2020
        40   50   60


*/

#include<stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int arr[ROW][COL] = {{10,20,30}, {40,50,60}};

	int i,j,count=1;
	printf("Sizeof(arr) = %d, sizeof(arr[0])=%d",sizeof(arr),sizeof(arr[0]));

	printf("\nBase Address of arr=%u",arr);
	/*
	printf("\nAddress of arr[0][0]=%u, value=%d",&arr[0][0],arr[0][0]);
	printf("\nAddress of arr[0][1]=%u, value=%d",&arr[0][1],arr[0][1]);
	printf("\nAddress of arr[0][2]=%u, value=%d",&arr[0][2],arr[0][2]);
	printf("\nAddress of arr[1][0]=%u, value=%d",&arr[1][0],arr[1][0]);
	printf("\nAddress of arr[1][1]=%u, value=%d",&arr[1][1],arr[1][1]);
	printf("\nAddress of arr[1][2]=%u, value=%d",&arr[1][2],arr[1][2]); 
	*/

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("\nAddress of arr[%d][%d]=%u, value=%d",i,j,&arr[i][j],arr[i][j]);			
		}
	}

	printf("\n=============Values of the arrays are=============\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("\n%d",arr[i][j]);			
		}
	}


	printf("\n=============Add extras Values of the arrays are=============\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL+2;j++)
		{
			printf("\nCount = %d",count);
			arr[i][j] = count++;		
			printf("\na[%d][%d] = %d",i,j,arr[i][j]);	
		}
	}

	printf("\n=============Values of the arrays are=============\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL+2;j++)
		{
			printf("\n%u = %d",&arr[i][j],arr[i][j]);			
		}
	}
	printf("\n\n\n");

	return 0;

}
