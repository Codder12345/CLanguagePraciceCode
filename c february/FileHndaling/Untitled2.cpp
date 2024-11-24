#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\abc.txt","w");
	if(ptr==NULL)
	{
		printf("open file");
	}
	printf("\nEnter sring form user");
	ch=fgets(ptr);
	fputs(ch,ptr);
}
