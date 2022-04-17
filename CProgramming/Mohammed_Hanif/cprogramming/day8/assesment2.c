#include<stdio.h>
#include<stdlib.h>

//proto type declaration of fuctions

int circle(int);
int rectangle(int,int);
int square(int);
float triangle(int,int);

int main(int argc, char **argv)
{

	if(argc <4){
		printf("\nLess no of arguments\n");
		printf("\nUsage: ./area op int int\n");
		exit(EXIT_FAILURE);
	}

	int a=atoi(argv[1]),b=atoi(argv[3]);

	//int a,b;
	int circ = 0, tria = 0,rect = 0, squa = 0;

	printf("\n Enter the area values:\n");
	scanf("%d%d",&a,&b);

	circ = circle(a);
	tria = triangle(a,b);
	rect = rectangle(a,b);
	squa = square(a);

	printf("\nArea of circle:%d",circ);
	printf("\nArea of triangle:%d",tria);
	printf("\nArea of Rectanfle:%d",rect);
	printf("\nArea of Square:%d",squa);

	return 0;


}
int circle(int radius)
{
	return (3.14*radius*radius);
}

int rectangle(int breadth,int length)
{
	return (breadth*length);
}
int square(int side)
{
	return (side);
}

int triangle(int base,int height)
{
	return (0.5*base*height);
}