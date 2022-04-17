/*
 	Demo on 2 dim array

 	op[SIZE][SIZE]

 	op[ROW][COL]=> string [no of strings][length of each string]

 	op[2][6] = {'Bhima','Ravi'};

 	2000 2001 2002 2003 2004 2005
 	'B'	  'h'  'i'  'm'  'a'  '\0'

 	2006  2007 2008 2009 2010 2011
 	'R'    'a'  'v'  'i'  '\0'


 */
#include<stdio.h>

int main()
{
	char name[3][6] = {"Bhima","Ravi","Rahul"};

	printf("\nName1 : %s and its address=%u\n",name[0],&name[0]);
	printf("\nName2 : %s and its address=%u\n",name[1],&name[1]);
	printf("\nName3 : %s and its address=%u\n",name[2],&name[2]);
	printf("\nsizeof(name) = %d\n sizeof(name[0])=%d",sizeof(name),sizeof(name[0]));

	for(int i=0;i<18;i++)
	{

		printf("\nAddress=%u Name[%d]=> character = %c Ascii=%d\n",&name[0][i],i,name[0][i],name[0][i]);


	}

}