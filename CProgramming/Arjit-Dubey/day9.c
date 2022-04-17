//first prgrm

/*
Function pointers
return_dt (*fun_ptr)(args) = &fun_name
*/

#include <stdio.h>

void display(int);

int main(int argc, char const *argv[])
{
	/* code */
	//display(10);

	void (*fun_ptr)(int) = &display;

	(*fun_ptr)(20);

	printf("\n\n");

	return 0;
}


void display(int a)
{
	printf("\nCalled by function pointer\nValue of a=%d\n",a);
}




//function pointer

#include<stdio.h>
#include<stdlib.h>

void sum(int,int);
void sub(int,int);
void mul(int,int);

int main(int argc, char const *argv[])
{
    int ch, a,b;
    void(*fun_ptr[]) (int,int) = {sum,sub,mul}

    printf("\n Enter the values of a and b: ");
    scanf("%d%d", &a,&b);
    printf("\n Enter choice: \n0. sum\n1. sub\n2. mul\nchoice: ");
    scanf("%d%d", &ch);

    fun_ptr[ch] (a,b);

    printf("\n\n");
    return 0;
}

void sum(int a, int b)
{
    printf("\n sum = %d", (a+b));
}

void sub(int a, int b)
{
    printf("\n sub = %d", (a-b));
}

void mul(int a, int b)
{
    printf("\n mul = %d", (a*b));
}


//with int same prgrm

#include <stdio.h>
#include <stdlib.h>

int Sum(int,int);
int Sub(int,int);
int Mul(int,int);

int main(int argc, char const *argv[])
{
	int ch, a,b;
	int (*fun_ptr[])(int,int) = {Sum,Sub,Mul};
	
	printf("\nEnter the values of a and b: ");
	scanf("%d%d",&a,&b);
	printf("\nEnter Choice: \n0. Sum\n1. Sub\n2. Mul\nChoice: ");
	scanf("%d",&ch);

	//Sum(a,b);
	//fun_ptr[1](a,b);=>Sub
	

	printf("\nReturn from Func ptr= %d",fun_ptr[ch](a,b));



	printf("\n\n");

	return 0;
}

int Sum(int a,int b)
{
	printf("\n Sum = %d", (a+b));
	return (a+b);
}

int Sub(int a,int b)
{
	printf("\n Sub = %d", (a-b));
	return (a-b);
}

int Mul(int a,int b)
{
	printf("\n Mul = %d", (a*b));
	return (a*b);
}


//#include <stdio.h>
#include <stdlib.h>

void Sum(int,int);
void Sub(int,int);
void Mul(int,int);

int main(int argc, char const *argv[])
{
	/* code */
	/*Sum(10,20);
	Sub(20,10);
	Mul(2,3);
*/
	//int ret=0;
	void (*fun_ptr)(int,int);
/*
	int *ptr;
	int a=10;
	int b=20;
	ptr = &a;
	printf("%d",*ptr);
	ptr = &b;
	printf("%d",*ptr);
	*/

	 fun_ptr = &Sum;

	fun_ptr(10,20);

	//printf("\nRet = %d",ret);

	fun_ptr = &Sub;

	fun_ptr(30,20);


	printf("\n\n");

	return 0;
}

void Sum(int a,int b)
{
	printf("\n Sum = %d", (a+b));
	//return (40);
}

void Sub(int a,int b)
{
	printf("\n Sub = %d", (a-b));
}

void Mul(int a,int b)
{
	printf("\n Mul = %d", (a*b));
}


//structure

#include<stdio.h>
#include<string.h>

typedef struct EMP
	{
		int empID;
		char empName[20];
		float empSal;
		
	}EMP;

//typedef struct EMP EMP;



void display(EMP *);



int main()
{
	
	

	EMP E1,E2;
	//struct compDetails C1,C2;
	
	E1.empID = 1001;
	E1.empSal = 10000;

	strcpy(E1.empName, "Bhima");

	//display(E1)

	E2.empID = 1002;
	E2.empSal = 20000;
	
	strcpy(E2.empName, "Shankar");

	
	display(&E1);
	
	printf("\nEmp Name: %s",E2.empName);
	printf("\nEmp ID: %d",E2.empID);
	printf("\nEmp Salary: %f ",E2.empSal);

	printf("\nUpdated Name of E1: %s",E1.empName);
	//printf("\nAddress of E1=%u",&E1);

	printf("\n\n");
	return 0;

}


void display(EMP *E)
{
	
	printf("\n=============================\n");
	printf("\nEmp Name: %s",E->empName);
	printf("\nEmp ID: %d",E->empID);
	printf("\nEmp Salary: %f ",E->empSal);
	printf("\n=============================\n");
	printf("\nAddress of E=%u",E);
	strcpy(E->empName,"Ashutosh");


}