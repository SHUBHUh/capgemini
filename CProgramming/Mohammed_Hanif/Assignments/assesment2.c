#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//proto type declaration of fuctions

int circle(int);
int rectangle(int,int);
int square(int);
float triangle(int,int);

int main(int argc, char **argv)
{
	

	if(argc>2 && argc <=3)
	{
		if(strcmp(argv[1],"square")== 0)
		{
			printf("\nArea of Square:%d\n",(atoi(argv[2])*atoi(argv[2])));
		}
		else if(strcmp(argv[1],"circle")== 0)
		{
			printf("\nArea of circle:%f",(3.14*atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		}	
	}
	else if(argc>3 && argc <=4)
	{
		if(strcmp(argv[1],"rectangle")== 0)
		{
			printf("\nArea of Rectangle:%d",(atoi(argv[2])*atoi(argv[3])));
		}
		else if(strcmp(argv[1],"triangle")== 0)
		{
			printf("\nArea of Triangle:%f",(0.5*atof(argv[2])*atof(argv[3])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		}	
	}
	else
	{
		printf("\nCheck the no of args required\n");
		exit(EXIT_FAILURE);
	
	}
	

	printf("\n\n");
	return 0;
}
