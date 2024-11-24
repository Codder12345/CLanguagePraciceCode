#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("\n Enter year=");
	scanf("%d",&year);
	year%400==0||year%4==0&&year%100!=0?printf("\nLeap year=%d",year):printf("\n not Leap year=%d",year);
	return 0;
}
