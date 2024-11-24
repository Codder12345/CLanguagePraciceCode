#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year=");
	scanf("%d",&year);
 
    if(year%400==0)
    {
    	printf("Leap year:%d",year);
	}
	else if(year%100==0)
	{
		printf("not leap year.");
	}
	else if(year%4==0)
	{
		printf(" Leap year:%d",year);
	}
	else
	{
		printf("not leap year");
	}
}
