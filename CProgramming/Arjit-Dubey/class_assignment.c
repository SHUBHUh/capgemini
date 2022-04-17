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

#include<stdio.h>
#include<string.h>

void replaceSubstring(char [],char[],char[]);

main()
{
char string[100],sub[100],new_str[100];
printf("\nEnter a string: ");
gets(string);
printf("\nEnter the substring: ");
gets(sub);
printf("\nEnter the new substring: ");
gets(new_str);
replaceSubstring(string,sub,new_str);
printf("\nThe string after replacing : %s\n",string);
}

void replaceSubstring(char string[],char sub[],char new_str[])
{
int stringLen,subLen,newLen;
int i=0,j,k;
int flag=0,start,end;
stringLen=strlen(string);
subLen=strlen(sub);
newLen=strlen(new_str);

for(i=0;i<stringLen;i++)
{
flag=0;
start=i;
for(j=0;string[i]==sub[j];j++,i++)
if(j==subLen-1)
flag=1;
end=i;
if(flag==0)
i-=j;
else
{
for(j=start;j<end;j++)
{
for(k=start;k<stringLen;k++)
string[k]=string[k+1];
stringLen--;
i--;
}

for(j=start;j<start+newLen;j++)
{
for(k=stringLen;k>=j;k--)
string[k+1]=string[k];
string[j]=new_str[j-start];
stringLen++;
i++;
}
}
}
}



////


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	
	printf("\n%d\n",argc);
	if(argc>2 && argc<=3)
	{
		
		

		if(strcmp(argv[1], "square") == 0)
		{
			printf("\nArea of square : %d\n",(atoi(argv[2])*atoi(argv[2])));
		}
		else
		{
			printf("\nCheck the no of args required\n");
			exit(EXIT_FAILURE);
		
		}
	}
	else if(argc>3 && argc <= 4)
	{
		//code for other shapes
		printf("\nArea of other shapes\n");
		if(strcmp(argv[1],"triangle")==0)
		{
				printf("\nTriangle Area: %f\n",(0.5*atof(argv[2])*atof(argv[3])));
		}
		else if(strcmp(argv[1],"rectangle")==0)
		{
				printf("\nRectangle Area: %d\n", (atoi(argv[2])*atoi(argv[3])));
		}
		else{
			printf("\nEnter the correct shape name\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("\nCheck the no of args required\n");
		exit(EXIT_FAILURE);
	}




	return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int Square(int);
int Rectangle(int,int);
int main(int argc, char const *argv[])
{
	
	int a=atoi(argv[1]),b=atoi(argv[2]);
	char ar=argv[3][0];
	switch(ar)
	{
		case 's':
		printf("\nArea of Square is: %d\n",Square(a));
		break;
		case 'r':
		printf("\nArea of Rectangle is: %d\n",Rectangle(a,b));
		break;
	}
	printf("\n\n");
	return 0;
}
int Square(int v1)
{
	int area=0;
	area=v1*v1;
	return area;
}
int Rectangle(int v1,int v2)
{
	int area=0;
	area=v1*v2;
	return area;
}*/