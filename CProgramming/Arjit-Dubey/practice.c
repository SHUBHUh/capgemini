//prgrm1


#include<stdio.h>

void rvereseArray(int arr[], int start, int end)
{
	int temp;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);

printf("\n");
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	rvereseArray(arr, 0, n-1);
	printf("Reversed array is \n");
	printArray(arr, n);
	return 0;
}






//prgrm 2

#include <stdio.h>  
#include <string.h>  
  

void revstr(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1); 
      

    for (i = 0; i < len/2; i++)  
    {  

        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50];
        printf (" Enter the string: ");  
        gets(str); 
          
        printf (" \n Before reversing the string: %s \n", str);  
           
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  








//progrm 3

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {0,5,4,3,2,1};     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated    
    int n = 3;    
        
    //Displays original array    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }     
        
    //Rotate the given array by n times toward right    
    for(int i = 0; i < n; i++){    
        int j, last;    
        //Stores the last element of the array    
        last = arr[length-1];    
        
        for(j = length-1; j > 0; j--){    
            //Shift element of array by one    
            arr[j] = arr[j-1];    
        }    
        //Last element of array will be added to the start of array.    
        arr[0] = last;    
    }    
        
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    



//prgrm 4

#include <stdio.h>
int main ()
{
    int n = 0, i = 0, largest1 = 0, largest2 = 0, temp = 0;
 
    printf ("Enter the size of the array\n");
    scanf ("%d", &n);
    int array[n];
    printf ("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &array[i]);
    }
 
    printf ("The array elements are : \n");
    for (i = 0; i < n; i++)
    {
        printf ("%d\t", array[i]);
    }
 
    printf ("\n");
 
    largest1 = array[0];
    largest2 = array[1];
 
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }
 
    printf ("The FIRST LARGEST = %d\n", largest1);
    printf ("THE SECOND LARGEST = %d\n", largest2);
 
    return 0;
}

//prgrm 5

#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}


//prgrm 6

#include<stdio.h>
int  main( )
{
int  a[20], b[20], n, sml=0, pos, i, j, temp ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d ",& n) ;
printf("\n Enter the terms : \n") ;
for (i = 1; i <= n; i++)
{
scanf("%d ",& a[i]) ;
b[i] = a[i] ;
}
for (  i = 1 ; i <= n ; i++)
{
for (  j = 1 ; j <= n ; j++)
{
if ( a[i] <= a[j] )
{
temp = a[i] ;
a[i] = a[j] ;
a[j] = temp ;
}}}
printf("\n The Array Elements are: \n") ;
for (  i = 1 ; i <= n ; i++)
printf(" %d \t",b[i]) ;

printf("\n Second Smallest Element is : %d",a[2]) ;
printf("\n Second Largest Element is : %d",a[n-1]) ;
return ( 0 ) ;
}