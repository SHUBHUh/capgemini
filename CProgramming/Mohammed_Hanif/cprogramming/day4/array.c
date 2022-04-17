/*
	demo on arrays
*/
#include<stdio.h>
int main()
{
	//declaring an array
	int a[1024] = {[0 ... 1023] = 100};//{100,200,300};

	printf("\n a[0]= %u and value %d\n",&a[0],a[0]);
	printf("\n a[1]= %u and value %d\n",&a[1],a[1]);
	printf("\n a[2]= %u and value %d\n",&a[2],a[2]);

	a[0]=10;
	a[1]=20;
	a[2]=30;

	printf("\n a[0]= %u and value %d\n",&a[0],a[0]);
	printf("\n a[1]= %u and value %d\n",&a[1],a[1]);
	printf("\n a[1022]= %u and value %d\n",&a[1022],a[1022]);

	return 0;
}