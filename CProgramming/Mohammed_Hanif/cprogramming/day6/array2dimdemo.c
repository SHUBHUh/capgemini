#include<stdio.h>
#include<string.h>
#define COL 6
#define ROW 3
int main()
{
	char name[ROW][COL] = {'\0'};//,"Ravi","Rahul"};


		strncpy(name[0],"Bhimashankar",COL-1);
		strncpy(name[1],"Rahul kumar",COL-1);
		strncpy(name[2],"Ravi kumar",COL-1);

	printf("\nName1 : %s and its address=%u\n",name[0],&name[0]);
	printf("\nName2 : %s and its address=%u\n",name[1],&name[1]);
	printf("\nName3 : %s and its address=%u\n",name[2],&name[2]);
	printf("\nsizeof(name) = %d\n sizeof(name[0])=%d",sizeof(name),sizeof(name[0]));

	for(int i=0;i<30;i++)
	{

		printf("\nAddress=%u\tName[%d]=> character = %c Ascii=%d\n",&name[0][i],i,name[0][i],name[0][i]);

		
	}

}