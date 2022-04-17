/*
*program to implement a copy command on linux system
* ex:cp source_file dest_file
* o/p:./cpmode src_file dest_file
* expected output is contents of src_file is copied to dest_file 
*
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{

	FILE *fp_src, *fp_des;
	char ch;
	if(argc > 4)
	{
		fprintf(stderr,"\nPlease pass the name of file\n");
		exit(EXIT_FAILURE);
	}

	fp_src = fopen(argv[1],"r");

	if(fp_src == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}

	fp_des = fopen(argv[2],"w");
	
	if(fp_des == NULL)
	{
		fprintf(stdout,"\nUnable to open the file\n");
		exit(EXIT_FAILURE);
	}


	
	while((ch = getc(fp_src))!=EOF){
		
		putc(ch, fp_des);
		
    }
    

        
	fclose(fp_src);
	fclose(fp_des);



	return 0;
}//EOF