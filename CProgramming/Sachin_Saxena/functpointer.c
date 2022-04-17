#include<stdio.h>
#include<stdlib.h>
int Sum(int,int);
int Sub(int,int);

int main(int argc,char *argv)
{
	void(*fun_ptr)(int,int);
	fun_ptr=&Sum;
	fun_ptr(10,20);
	fun_ptr=&Sub;
	fun_ptr(30,20);


	printf("\n\n");
	return 0;
}
int Sum(int v1, int v2)
{
	printf("Sum=%d",v1+v2);
}

int Sub(int v1,int v2)
{
	printf("Sub=%d",v1-v2);
}
