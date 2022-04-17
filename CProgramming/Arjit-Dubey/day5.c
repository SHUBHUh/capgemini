//3rd progrm.... it will make square of any number

#include<stdio.h>
#define SQUARE(x) ((x)*(x))

int main()
{
    printf("%d", SQUARE (12));

    return 0;
}





//1st prgrm....

#include<stdio.h>

int main()
{
    int arr [5];
    int i;

    for(i=0, j=5; i<5; i++, j*=4)

    {
        arr [i] = j;
    }

    for(i=0;i<5;i++)

    printf("%d", arr[i]);
    printf("\n\n");
}







//2nd prgram..... show 1 to 10 num. as cap  =10 can be changed

#include<stdio.h>
#define CAP 10

int main()
{
    int arr [CAP];
    int i;

    for(i=0; i<CAP; i++)

    {
        arr [i] = i+1;
    }

    for(i=0;i<CAP;i++)

    printf("%d", arr[i]);
    printf("\n\n");
}



//class assig... 1

#include <stdio.h>
 
int main()
{
	int arr[10], b[10], Count = 0, i, j, k, num;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &num);
	
	printf("\n Please Enter %d elements of an Array  :  ", num);
	
	for (i = 0; i < num; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < num; i++)
	{
		for(j = 0; j < Count; j++)
		{
    		if(arr[i] == b[j])
    		{
    			break;
			}
		}
		if(j == Count)
		{
			b[Count] = arr[i];
			Count++;
		}
	}

 	printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < Count; i++)
  	{
 		printf("%d\t", b[i]);
  	}	     
 	return 0;
}



//

#include<iostream>
using namespace std;
 
/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}

//same

#include<stdio.h>
//using namespace std;
 
/*C++ Function to print leaders in an array */
int main()
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }

 
/* Driver program to test above function */
//int main()

    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}