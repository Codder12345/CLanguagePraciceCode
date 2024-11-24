#include<stdio.h>
int main()
{
	FILE *ptr;
	char name[60];
	int i;
	char password[10];
	ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\username.txt","w");
	if(ptr==NULL)
	{
		printf("open file");
	}
	else{
		printf("\n Enter User name and password from user");
       for(i=0;i<5;i++)
       {
       	printf("\n Enter name:");
       gets(name);
       printf("\nEnter password");
       gets(password);
       fputs(name,ptr);
       fputs("\t",ptr);
       fputs(password,ptr);
        fputs("\n",ptr);
	   }
	 fclose(ptr);

	}
	return 0;
}

