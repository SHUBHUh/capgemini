#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float areaoftriangle(int ,int);
int areaofrectangle(int, int);
int areaofsquare(int);
float areaofcircle(int);




int  main(int argc,const   char *argv[])
{
	int a=atoi(argv[2]),b=atoi(argv[3]);

	if(argc > 2 && argc <= 3)
	{
		if(strcmp(argv[1], "square") == 0)
		{
		printf("\nArea of Square=%d",areaofsquare(a));
		}
		else if(strcmp(argv[1],"circle") == 0)
		{
		printf("\n Area of Circle=%f",areaofcircle(a));
		} 
		else{
			printf("\n Check the no of arrgument\n");
		 	exit(1);
		}
	}
	else if(argc>3 && argc<=4)
		{
		         if(strcmp(argv[1],"triangle")==0)
	        	     {
			     printf("\n Area of Triangle=%f",areaoftriangle(a,b));
		     		}
			else if(strcmp(argv[1],"rectangle")==0)
			{
				printf("Area of rectangle=%d",areaofrectangle(a,b));
			}
			else{
			printf("\nCheck the no of arguments");
		        exit(1);
			}	
		}
			else{
			printf("\nCheck the no of arguments");
		        exit(1);
			}	
		

           
	
	printf("\n\n");
	return 0;
}


float areaoftriangle(int a,int b)
{
	return((float)(a*b)/2);
}

int areaofrectangle(int a,int b)
{
	return(a*b);
}
float areaofcircle(int a)
{
	return((float)(a*a)/3.142);
}
int areaofsquare(int a)
{
	return(a*a);
}

