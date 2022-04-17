#include<stdio.h>

int main()
{
	int a[2] = {1,2};
	int *ptr;
	//ptr = &a[0];
	//ptr = &*(a+0);
	//ptr = (a+0);
	ptr = a;
	////value////////
	printf("\nBase Address of a[0]=%u \n",*(a+0));
	//////address//////
	printf("\nAddress of a[0]=%u and value = %d\n",&a[0],a[0]);
	printf("\nAddress of ptr=%u and value = %d\n",ptr,*ptr);
	printf("\nAddress of actual ptr=%u\n",&ptr);

	//ptr = &a[1];
	ptr++;
	printf("\nAddress of a[1]=%u and value = %d\n",&a[1],a[1]);
	printf("\nAddress of ptr=%u and value = %d\n",ptr,*ptr);
	printf("\nAddress of actual ptr=%u\n",&ptr);

	return 0;
}