#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch[10];
	ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\maya.txt","w");
	if(ptr==NULL)
	{
		printf("\n file not available");
	}
	else
	{
		printf("\n Enter name from user");
		gets(ch);
		fputs(ch,ptr);
		
	}
	fclose(ptr);
	return 0;
}
