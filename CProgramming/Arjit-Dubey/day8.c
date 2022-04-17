#include <stdio.h>

void swapNos(int *, int *);
void swapNosV(int, int)

    int main()
{
    int a 10, b = 20;

    printf("\nPass by value call\n");
    swapNosV(a, b);
    printf("\na=%d\nb=%d\n", a, b);

    printf("\nPass by address call\n");
    swapNos(la, ab);
    printf("\na=%d\nb=%d\n", a, b);

    return 0;
}

void swapNost(int ptri, int ptr2)
{

    int temp;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("\nWithin function\na=%d\nb-sd\n", ptri, ptr2);
}

void swapNos(int *ptri, int *ptr2)
{
    int temp;

    temp = *ptri;
    *ptrl = *ptr2;
    *ptr2 temp;
}


//
#include <stdio.h>

void swapNos(int *,int *);
void swapNosV();
const int ptr1=10;
const int ptr2=20;
int main()
{
	int a=10,b=20;

	
	printf("\nPass by value call\n");
	swapNosV();
	printf("\na=%d\nb=%d\n",ptr1,ptr2);

	printf("\nPass by address call\n");
	swapNos(&a,&b);
	printf("\na=%d\nb=%d\n",a,b);



	return 0;
}

void swapNosV()
{
	int *temp;
	int t1=ptr1;

	temp = &ptr1;
	*temp = ptr2;
	temp = &ptr2;
	*temp = t1;
	
	printf("\nWithin function\na=%d\nb=%d\n",ptr1,ptr2);
}


void swapNos(int *ptr1, int *ptr2)
{
	int temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}



//ass...

#include<stdio.h>

int func1();

int main()
{

    printf("\nCount from function = %d", func1());
    printf("\nCount from function = %d", func1());

    printf("\n\n");
    return 0;
}

int func1()
{
   static int count = 1;

    count+= 2;

    return count;
}



///
#include <stdio.h>
 
int sort(int *a,int n);
int print(int *a,int n);
 
int main()
{
    	int a[10000],i,n,key;
   
    	printf("Enter size of the  array : ");
    	scanf("%d", &n);
    	
    	printf("Enter elements in array : ");
    	for(i=0; i<n; i++)
    	{
        	scanf("%d",&a[i]);
    	}
 
 	sort(a,n);
 	printf(" \n Array After Sorting : ");
      	print(a,n);
      	printf("\n\n");
   
}

int sort(int *a,int n)
{ 
    	int i,j,temp;
     	for(i=0; i<n-1; i++)
    	{
           	for(j=0; j<n-i-1; j++)
        	{
           		if(a[j]>a[j+1])
           		{
           			temp=a[j];
           			a[j]=a[j+1];
           			a[j+1]=temp;
		   	}
  		}
    	}
}
 int print(int *a,int n)
{ 
	int i;
    	for(i=0; i<n; i++)
    	{
       	printf("%d ",a[i]);
    	}      
}