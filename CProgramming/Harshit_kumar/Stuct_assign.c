#include<stdio.h>
#include<string.h>


struct EMP
{
		int empID;
		char empName[20];
		float empSal;
		
};

typedef struct EMP EMP;

void display(EMP);
void ipEMPDetails(EMP *);



int main()
{
	
	EMP E1,E2;

	ipEMPDetails(&E1);
	ipEMPDetails(&E2);

	display(E1);
	display(E2);
	
	
	printf("\n\n");
	return 0;

}



void ipEMPDetails(EMP *E)
{

	int n=2;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

       
        printf("\n");
}


void display(EMP E)
{
	
	printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
	
}

