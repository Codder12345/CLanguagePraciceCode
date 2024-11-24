#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("C://Users//HI//Desktop//lite bill payment//maya.txt","w");
	if(ptr==NULL)
	{
		printf("\n File is not available");
	}
	else{
		do{
			ch=getc(ptr);
			printf("%c",ch);
		}
		while(ch!=EOF);
		printf("\n Create file and opend");
	}
	getch();
}
