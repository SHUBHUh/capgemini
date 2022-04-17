#include<stdio.h>
#include<stdlib.h>
void printBufs(long);

int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		fprintf(stderr,"Usage:%s num\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	printBufs(strtol(argv[1],NULL,0));
	return 0;
}