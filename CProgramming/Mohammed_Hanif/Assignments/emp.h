#include<stdio.h>
#ifndef EMP_H
#define EMP_H

struct EMP
{
                int empID;
                char empName[20];
                float empSal;

};

typedef struct EMP EMP;

void display(EMP);
void ipEMPDetails(EMP *);


void ipEMPDetails(EMP *E)
{
        printf("\nEnter the details of the Employee\n");
        printf("\nName: ");
        scanf("%s",E->empName);
        printf("\nEmp ID: ");
        scanf("%d",&E->empID);
        printf("\nEmp Salary: ");
        scanf("%f",&E->empSal);
}

#endif


