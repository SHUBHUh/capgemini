/*CC := gcc

all: dtype hChar

dtype: dtype.o
	${CC} -g -o dtype dtype.o

dtype.o: dtype.c
	${CC} -c -g dtype.c

hChar: hChar.o
	${CC} -g -o hChar hChar.o

hChar.o: hChar.c
	${CC} -c -g hChar.c

clean:
	@echo "Cleaning the files...."
	rm -rvf *.o a.out dtype hChar 
*/


/*
#include <stdio.h>

int main()
{
	/*
	//Left sift op
	
	int a=5,b;

	b = 5<<1;

	printf("\n b = %d\n", b);

*/

/*
	//Right shit op

	int a=5,b;

	b = 5>>1;

	printf("\n b = %d\n", b);
*/

	/*
	// bitwise and op
	int a=5,b=1,c;

	c = a&b;

	printf("\n c = %d\n", c);
	

	// bitwise or op
	int a=5,b=2,c;

	c = a|b;

	printf("\n c = %d\n", c);
	

	
	return 0;
}

*/



/*

/*
   data type and its size

*/

#include <stdio.h>

void main()
{
	char ch;
	int i;
	float f;
	long double d;


	ch = 'A';
	i = 10;
	f = 13.3;
	d = 3.14e+2;

	printf("\nSize of char=%ld and its value = %c",sizeof(ch),ch);
	printf("\nSize of integer=%ld and its value = %d",sizeof(i),i);
	printf("\nSize of float=%ld and its value = %f",sizeof(f),f);
	printf("\nSize of double=%ld and its value = %Lf\n",sizeof(d),d);
}//EOM
	


*/


/*

#include <stdio.h>

int main()
{
	char schar=250;
	unsigned char uchar=250;

	char ch='a';

	printf("\nSigned char value = %d\n",schar);
	printf("\nUnsigned char value = %d\n",uchar);
	printf("\nAscii value of ch=%c is %d\n",ch,ch);
	printf("\nAscii character of %c for Ascii value of %d\n",251,251);

	return 0;
}


*/