#ifndef USERS_H
#define USERS_H

#define buflen 20

struct Users
{
	int Uid;
	char Upasswd[buflen];
	char Uname[buflen];
};

typedef struct Users USERS;

void setUsers(USERS *);
void getUsers(USERS);


void setUsers(USERS *U)
{

	printf("\nEnter User Name: ");
	scanf("%[^\n]s",U->Uname);
	
	//fflush(stdin);
	printf("\nEnter User ID: ");
	scanf("%d",&U->Uid);
	printf("\nEnter User password: ");
	scanf("%s",U->Upasswd);

}

void getUsers(USERS U)
{
	printf("\nUser Name: ");
	printf("%s",U.Uname);
	printf("\nUser ID: ");
	printf("%d",U.Uid);
	printf("\nUser password: ");
	printf("%s",U.Upasswd);
	printf("\n\n");
}


#endif
