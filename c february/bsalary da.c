#include<stdio.h>
#include<conio.h>
int main()
{
	int bs,tot,da,hra;
	printf("\n Enter basic salary=");
	scanf("%d",&bs);
	da=bs*30/100;
	hra=bs*30/100;
	tot=bs+da+hra;
	printf("\n total salary= %d",tot);
	return 0;
}
