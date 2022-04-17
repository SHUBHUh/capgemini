//1st assignment

#include <stdio.h>
 
int sort(int *a,int n);
int print(int *a,int n);
 
int main()
{
    	int a[10],i,n;
   
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
