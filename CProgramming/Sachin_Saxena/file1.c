/*
Demo on File io with fwrite and fread
*/

#include <stdio.h>
#include<string.h>
#include "Users.h"

int main(int argc, char const *argv[])
{
	USERS u[3];
	char t[2]={'\0'};
	int ret=0;
	
	char cPasswd[20]={'\0'};
	int cUid=0, i;

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
		ret=checkUser(u[i],cUid,cPasswd);
		if(ret>0)
			break;
	}

	if(ret==1)
		printf("\nUserId Is found but password doesnot match\n");
	else if(ret==2)
		printf("\nUser found Successfully :- Userid and Password\n");
	else
		printf("\nUser Not Found\n");

	printf("\nEnd of Program\n");



	return 0;
}
