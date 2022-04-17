/*
implement a copy command on linux system
ex: cp source_file dest_file

o/p :
./cpRubi src_file dest_file

expected output is contents of src_file is copied to dest_file
*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	FILE *fp1,*fp2;
	char ch;
	if(argc!= 3)
	{
		fprintf(stderr,"\nmissing file operand\n");
		exit(EXIT_FAILURE);

	}

	fp1 = fopen(argv[1],"r");
	if(fp1 == NULL)
	{
		fprintf(stdout, "\nNo such file or directory\n");
		exit(EXIT_FAILURE);
	}

	fp2 = fopen(argv[2],"w");
	if(fp2 == NULL)
	{
		fprintf(stdout, "\nmissing destination file operand after\n");
		exit(EXIT_FAILURE);
	}

	ch = fgetc(fp1);

	while(ch != EOF)
	{
		fputc(ch,fp2);
		ch = fgetc(fp1);
	}
	fprintf(stdout, "\nSuccessfull copied file source to destination\n");
	fclose(fp1);
	fclose(fp2);

	return 0;
}