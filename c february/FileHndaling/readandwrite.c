#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	ptr=fopen("C://Users//HI//Desktop//lite bill payment//abc2.txt","r");
	if(ptr==NULL)
	{
		printf("\n File is not available");
	}
	else{
		printf("\n file  opend");
	}
	getch();
}
