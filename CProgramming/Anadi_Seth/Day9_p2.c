/*
function array pointer
*/
#include<stdio.h>

void Sum(int,int);
void Sub(int,int);
void Mul(int,int);


int main(int argc, char const *argv[])
{
	int ch,a,b;
	void (*fun_ptr[])(int,int) = {Sum,Sub,Mul};
	
	printf("\nEnter the values of a and b: ");
	scanf("%d%d",&a,&b);
	printf("\nEnter choice : \n0. Sum\n1. Sub\n2. Mul\nChoice: ");
	scanf("%d",&ch);

	fun_ptr[ch](a,b);
	

}
void Sum(int a,int b)
{
printf("\n Sum is = : %d",(a+b));
}
void Sub(int a,int b)
{
printf("\n Sub is = : %d",(a-b));
}
void Mul(int a,int b)
{
printf("\n Mul is = : %d\n",(a*b));

}

