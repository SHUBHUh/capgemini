#include<stdio.h>

int main (int argc, char const *argv[])

{
    int i;

    i = 1;
    while(i<=10)

    {
        printf("%d\n", i);
        i++;
    }

    printf("\n\n");
    return 0;
}


//2nd

#include<stdio.h>

int main (int argc, char const *argv[])

{
    int i;

    for (i = 1; i<=10; i++)
    {
        printf("%d\n", i);
    }
        printf("\n\n");

        return 0;
}


//ascii value
#include <stdio.h>  
int main()  
{  
    char a = 'A';
    char b = 'R';
    char c = 'J';
    char d = 'I';
    char e = 'T';
    //char r = 'R';
    printf("Enter a character");  
    scanf("%c",&a,&b,&c,&d,&e);  // user input  
    printf("\n The ascii value of the ch variable is : %d%d%d%d%d", a++,b++,c++,d++,e++);  
    return 0;  
}  






//multiplication
#include<stdio.h>
#include<conio.h>

int main()
{
	 int i, j, product;
	 clrscr();
	
	 /* Generating Multiplication Table */
	 for(i=1;i<=10;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			   product = i*j;
			   printf("%d x %d = %d\t", i, j, product);
		  }
		  printf("\n");
	 }
	 getch();
	 return(0);
}




// num. is prime or not
#include <stdio.h>

int main() {

  int a, i, num = 0;
  printf("Enter a number: ");
  scanf("%d", &a);

  if (a == 0 && a == 1)
    num = 1;

  for (i = 2; i <= a / 2; ++i) {

    if (a % i == 0) {
      num = 1;
      break;
    }
  }

  if (num == 0)
    printf("%d is a prime number.", a);
  else
    printf("%d is not a prime number.", a);

  return 0;
}




//array 

#include<stdio.h>
int main ()

{
    int a[3];
    printf("\n a[0] = %u and value = %d\n", &a[0], a[0]);
    printf("\n a[1] = %u and value = %d\n", &a[1], a[1]);
    printf("\n a[2] = %u and value = %d\n", &a[2], a[2]);

    return 0;

}

//array p 2

#include<stdio.h>
int main ()

{
    int a[3];
    printf("\n a[0] = %u and value = %d\n", &a[0], a[0]);
    printf("\n a[1] = %u and value = %d\n", &a[1], a[1]);
    printf("\n a[2] = %u and value = %d\n", &a[2], a[2]);

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    
    printf("\n a[0] = %u and value = %d\n", &a[0], a[0]);
    printf("\n a[1] = %u and value = %d\n", &a[1], a[1]);
    printf("\n a[2] = %u and value = %d\n", &a[2], a[2]);

    return 0;
    
}