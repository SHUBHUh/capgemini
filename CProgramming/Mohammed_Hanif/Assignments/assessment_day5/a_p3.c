#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[20] = "Rahul kumar";
	char str2[20] = "hul";
	char st[20] = "FOUND";
	int i,j;
	char *reset;

	reset = strstr(str1,str2);

	if(reset)
	{
		for(i=0;i<strlen(st);i++)
			//printf("%c\n",reset[i]);
		reset[0]='F';
		reset[1]='O';
		reset[2]='U';
		reset[3]='N';
		reset[4]='D';
			printf("\nString Found:%s\n",str1);
		
	}
	else
		printf("\nString not Found\n");

	//printf("\nRet=%d",ret);

	printf("\n\n");
	return 0;
}
