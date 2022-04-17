#include<stdio.h>
#include<stdlib.h>


int main()
{

	FILE *fp;
	fp= fopen("Hello.txt","w");
	if(fp == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fprintf(fp,"Hello how are you\n");
	fprintf(fp,"We are good how about you\n");


	fclose(fp);

	return 0;
}