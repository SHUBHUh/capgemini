#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Users.h"

int main(int argc, char const *argv[])
{
        system("clear");

	USERS u;
	char t[2]={'\0'};
	int n;
	char ch;

	
	char pass[20]={'\0'};
	char name[20]={'\0'};
	int uid=0, flag=0;

	FILE *ft;

printf("\n------------------------------------------------\n");
printf("------------------------------------------------\n");
	printf("\nPress 1 To Insert New Record\n");
	printf("Press 2 To View All Records\n");
	printf("Press 3 To Search the User Record\n");
	printf("Press 4 To Update Record\n");

printf("\n------------------------------------------------\n");
printf("------------------------------------------------\n");


do{
	printf("\n Please enter your choice:-");
	scanf("%d",&n);


     switch(n)
     {
	     case 1:
		     ft=fopen("Users.dat","r");
		     if(ft== NULL)
		     {
			     printf("\nUser Database File Doesnot Exist\n");
			     printf("\nCreating User Record File\n");
		     }
	                
        		     ft=fopen("Users.dat","a+");
		   	
		        setUsers(&u);
			fwrite(&u,sizeof(u),1,ft);
			if(fwrite!=0)
				printf("\n Data Inserted Successfully\n");
			else
				printf("\n Data not Inserted\n");
			//fclose(ft);
		     break;
	     case 2:
		     ft=fopen("Users.dat","r");
		     if(ft== NULL)
		     {
			     printf("\n No Database Found\n");
			     printf("\n First Create a Database\n");
			     break;
		     }
		     else
			 while(fread(&u,sizeof(u),1,ft))
					 getUsers(u);
		     //fclose(ft);
		     break;
	     case 3:
		     ft=fopen("Users.dat","r");
		     if(ft== NULL)
		     {
			     printf("\n No Database Found\n");
			     printf("\n First Create a Database\n");
			     break;
		     }
		     printf("Enter the User Id for search in the database=\n");
		     scanf("%d",&uid);
		     while(fread(&u,sizeof(u),1,ft))
		     if(u.Uid==uid)
		     {
		     	flag=1;
		             printf("\nUserid Found In the Database\n");
			     printf("Details of the User=\n");
			     getUsers(u);
			     break;
		     }

	       	    if(flag!=1)
       		    printf("\n Userid doesnot found in the database\n");
			
		   // fclose(ft);
		     break;

		case 4:

		     ft=fopen("Users.dat","r+");
		     if(ft== NULL)
		     {
			     printf("\n No Database Found\n");
			     printf("\n First Create a Database\n");
			     exit(EXIT_FAILURE);
		     }
		     printf("Enter the User Id for search in the database=\n");
		     scanf("%d",&uid);
		     while(fread(&u,sizeof(u),1,ft))
		     if(u.Uid==uid)
		     {
		     	flag=1;
			break;
		     }
		     
			
		     
	       	    if(flag!=1)
       		    printf("\n Userid doesnot found in the database\n");
		    else{
		             printf("\nUserid Found In the Database\n");
			     printf("Current Details of the User=\n");
			     getUsers(u);
			     //break;
			     printf("\nEnter the name and pass to be changed:- ");
			     scanf("%s%s",name,pass);
			     strcpy(u.Uname,name);
			     strcpy(u.Upasswd,pass);
			     fseek(ft,sizeof(u)*(-1),SEEK_CUR);
			     fwrite(&u,sizeof(u),1,ft);
			     printf("\n User Updated Successfully\n");
			     getUsers(u);
		    }

		    //fclose(ft);
		    break;

	     default:
		     printf("\n Enter the valid Option\n");
		     break;
     }

     printf("\nDo You want to continue (y/n):-");
     getc(stdin);
     scanf("%c",&ch);

}while(ch=='y');

        fclose(ft);
	printf("\nEnd of Program\n");

	return 0;

}
