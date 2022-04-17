#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	
	printf("\n%d\n",argc);
	if(argc>2 && argc<=3)
	{
		
		

		if(strcmp(argv[1], "square") == 0)
		{
			printf("\nArea of square : %d\n",(atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		
		}
	}
	else if(argc>3 && argc <= 4)
	{
		//code for other shapes
		printf("\nArea of other shapes\n");
		if(strcmp(argv[1],"triangle")==0)
		{
				printf("\nTriangle Area: %f\n",(0.5*atof(argv[2])*atof(argv[3])));
		}
		else if(strcmp(argv[1],"rectangle")==0)
		{
				printf("\nRectangle Area: %d\n", (atoi(argv[2])*atoi(argv[3])));
		}
		else{
			printf("\nEnter the correct shape name\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("\nCheck the no of args required\n");
		exit(EXIT_FAILURE);
	}




	return 0;
}

/*#include<stdio.h>
#include<stdlib.h>


int Square(int);
int Rectangle(int,int);

int main(int argc, char const *argv[])
{
	
	int a=atoi(argv[1]),b=atoi(argv[2]);
	char ar=argv[3][0];




	switch(ar)
	{
		case 's':
		printf("\nArea of Square is: %d\n",Square(a));
		break;

		case 'r':
		printf("\nArea of Rectangle is: %d\n",Rectangle(a,b));
		break;

	}

	printf("\n\n");



	return 0;
}

int Square(int v1)
{
	int area=0;
	area=v1*v1;

	return area;

}
int Rectangle(int v1,int v2)
{
	int area=0;
	area=v1*v2;

	return area;
}*/
