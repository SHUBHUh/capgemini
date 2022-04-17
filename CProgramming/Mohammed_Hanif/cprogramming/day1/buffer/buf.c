#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define DATA2 "Hello, I am buf2!"
#define DATA3 "Hello, I am buf3!"

void printBufs(long n)
{
	char * buf, buf2, buf3;

	if((buf = malloc(n)) == NULL)
	{
		err(EXIT_FAILURE,"malloc");
	}
	if((buf2 = malloc(8)) == NULL)
	{ 
		err(EXIT_FAILURE,"malloc");
	}
	if((buf3 = malloc(8)) == NULL)
	{
		err(EXIT_FAILURE,"malloc");
	}

	strcpy(buf2,DATA2);
	strcpy(buf3,DATA3);

	gets(buf);

	printf("\n buf is:%s\n",buf);
	printf("\n buf2 is:%s\n",buf2);
	printf("\n buf3 is:%s\n",buf3);
}