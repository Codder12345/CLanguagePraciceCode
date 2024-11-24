#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("C://Users//HI//Desktop//lite bill payment//abc1.txt","w");
	if(ptr==NULL)
	{
		printf("\n create file ");
	}
	getch();
}
