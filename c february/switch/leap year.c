#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year=");
	scanf("%d",&year);
	switch(year!=0)
	{
		case 1:
			if(year%400==0)
			{
				printf("Leap year %d",year);
			}
			else if(year%100==0)
			{
				printf("not Leap year:%d",year);
			}
			else if(year%4==0)
			{
				printf("Leap year %d",year);
			}
			else{
				printf("not leap: %d",year);
			}
			break;
			default:
			printf("Invalid year.");
	}
}
