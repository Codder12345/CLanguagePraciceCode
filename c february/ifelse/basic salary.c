#include<stdio.h>
int main()
{
	int bs,da,hra,gs;
	printf("Enter basic salary=");
	scanf("%d",&bs);
	if(bs>0&&bs<=10000)
	{
		hra=bs*20/100;
		da=bs*0.8/100;
	}
	else if(bs>10000 && bs<=20000)
	{
		hra=bs*0.25/100;
		da=bs*0.9/100;
	}
	else if(bs>20000)
	{
		hra=bs*0.3/100;
		da=bs*0.95/100;
	}
	else
	{
		printf("Invalid salary.");
	}
	printf("\nHRA:%d",hra);
	printf("\nDA:%d",da);
	printf("\nbasic salary:%d",bs);
	gs=bs+da+hra;
	printf("\ngross salary%d:",gs);
}
