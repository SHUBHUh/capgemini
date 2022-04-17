/*

Demo on File io with fwrite and fread

*/

#include <stdio.h>
#include "Users.h"

int main(int argc, char const *argv[])
{
	USERS u[3];
	char t[2]={'\0'};
	
	
	char cPasswd[20]={'\0'};
	int cUid=0, i,flag=0;

	for(i=0;i<3;i++)
	{	
		setUsers(&u[i]);
		gets(t);
	}
	
	for(i=0;i<3;i++)
	{	
		getUsers(u[i]);
		
	}
	
	printf("\nEnter the User ID and Passwd: ");
	scanf("%d%s",&cUid, cPasswd);

	for(i=0;i<3;i++)
	{

		if(u->Uid== cUid)
		{
			if(strcmp(u->Upasswd,cPasswd)==0)
			{
				flag=1;
			}
		}

	}

	if(flag!=1)
	{
		printf("\nUser found\n");
	}
	else
		printf("\nUser not found\n");


	printf("\nEnd of Program\n");



	return 0;
}

