#include<stdio.h>
#include<conio.h>
int main()
{
	int days ,month,week,year;
	printf("Enter no of number of days=");
	scanf("%d",&days);
	year=days/365;
	month=(days-year*365)/30;
	week=(days-(year*365+month*30))/7;
	days=days-((year*365)+(month*30)+(week*7));
	printf("\nyears=%d",year);
	printf("\nmonth=%d",month);
	printf("\nweek=%d",week);
	printf("\ndays=%d",days);
	return 0;
	
}
