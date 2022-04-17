/*
demo on funciotn pointer 
and different ways to call funciotn pointer
*/


#include<stdio.h>

void sum(int,int);
void sub(int,int);
void mul(int,int);


int main()
{
	void (*fun_ptr)(int,int) = &sum;
	(*fun_ptr)(10,20);
	//way of calling function pointer	
	printf("\n or can do in this other way\n");
	
	fun_ptr = &sum;
	fun_ptr(10,20);

	fun_ptr=sub;
	fun_ptr(30,10);

	fun_ptr=mul;
	fun_ptr(10,30);
}	

void sum(int a,int b)
{
printf("\n Sum is = : %d",(a+b));
}
void sub(int a,int b)
{
printf("\n Sub is = : %d",(a-b));
}	
void mul(int a,int b)
{
printf("\n Mul is = : %d\n",(a*b));

}
