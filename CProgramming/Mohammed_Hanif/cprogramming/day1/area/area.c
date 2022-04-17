#include<stdio.h>
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"
#include "square.h"

int main()
{
	int a,b;
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