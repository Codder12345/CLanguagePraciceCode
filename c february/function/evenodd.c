#include<stdio.h>
#include<conio.h>
int main()
{
	int getevenno(int);
	int range;
	printf("Enter range:");
	scanf("%d",&range);
	getevenno(range);
}
int getevenno(range)
{
	int i;
	printf("\n Even number:");
	for(i=1;i<=range;i++)
	{
		if(i%2==0)
		{
			printf("\t%d",i);
		}
	}
	printf("\nodd number:");
	for(i=1;i<=range;i++)
	{
		if(i%2!=0)
		{
			printf("\t%d",i);
		}
	}
}
