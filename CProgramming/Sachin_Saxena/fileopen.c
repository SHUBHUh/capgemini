#include<stdio.h>
#include<stdlib.h>

int main()
	{
		FILE *ftr;
		ftr=fopen("Hello1.txt","w");


		if(ftr== NULL)
		{
			fprintf(stdout,"\nUnable to open the file\n");
			exit(1);
		}

		fprintf(ftr,"\n Hello Team ,How Are you doing\n");
		fprintf(ftr,"\n Hello Team1 ,How Are you doing\n");
		fprintf(ftr,"\n Hello Team2 ,How Are you doing\n");
		fclose(ftr);

		return 0;
		
	}
