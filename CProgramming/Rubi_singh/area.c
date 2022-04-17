#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int squar(int);
int rectangle(int, int);
int tringle(int, int);

int main(int argc ,char **argv)

{
	printf("\n%d\n",argc);

	if(argc > 2 && argc <=3)
	
	{
		if(strcmp(argv[1],"square")==0)
		{
			printf("\nArea of square : %d ",(atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\ncheck the number of argu require\n");


			exit(EXIT_FAILURE);
		}

	}
	//int a=atoi(argv[1]),b=atoi(argv[3]);

	//int squ=1,rect=1,tri=1;
	
	
}

					
