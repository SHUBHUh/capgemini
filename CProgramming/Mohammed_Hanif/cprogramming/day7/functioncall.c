/*
Demo on functions

1.declaring a function
ret_dataype func_name(args);

2.defining a function
ret_datatype func_name(args)
{
		//code for the function

		return (return_values);//return_value = > ret_datatype
}
3.calling a function
func_name(args_values);

two types of calling a function
1. call by value...//pass the values
2. call bye reference //pass the address/reference of the variable 

*/
#include<stdio.h>
//proto type declaration of functions
int addition(int,int);
int Sub(int,int);
int Mul(int,int);
float Div(int,int);



int main()
{
	int a=15,b=4;
	int r_add=0,r_sub=0,r_mul=0;
	float r_div = 0.0;

	r_add = addition(a,b);//calling a function and its call bye value
	r_sub = Sub(a,b);
	r_mul = Mul(a,b);
	r_div = Div(a,b);

	printf("\nAddition of 2 nos = %d",r_add);
	printf("\nSubstraction of 2 nos = %d",r_sub);
	printf("\nMultiplication of 2 nos = %d",r_mul);
	printf("\ndivision of 2 nos = %f",r_div);
	printf("\n\n");
	printf("\nAddition of 2 nos = %d",addition(3,4));
	printf("\n\n");

	return 0;
}

int addition(int val1,int val2)
{
	return (val1+val2);
}
int Sub(int val1,int val2)
{
	return (val1-val2);
}
int Mul(int val1,int val2)
{
	return (val1*val2);
}
float Div(int val1,int val2)
{
	return ((float)val1/val2);
}