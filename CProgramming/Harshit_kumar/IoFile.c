#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

	FILE *fp1, *fp2;
	char ch;
	
	fp1 = fopen(argv[1],"r");

	if(fp1 == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fp2 = fopen(argv[2],"w");
	
	if(fp2 == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}


	
	while((ch = getc(fp1))!=EOF){
		
		putc(ch, fp2);
		
    }
    

        
	fclose(fp1);
	fclose(fp2);



	return 0;
}
