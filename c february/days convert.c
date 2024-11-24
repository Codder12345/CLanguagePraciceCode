#include<stdio.h>
#include<conio.h>
int main()
{
	int days ,week,month,year;
	printf("\n Enter days=");
	scanf("%d",&days);
	week=days/7;
	month=days/30;
	year=days/365;
	printf("\n week %d",week);
	printf("\n month %d",month);
	printf("\n year %d",year);
	return 0;
}
