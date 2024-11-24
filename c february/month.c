#include<stdio.h>
#include<conio.h>
int main()
{
	int month;
	printf("Enter number of month=");
	scanf("%d",&month);
	month==1?printf("january 31 days."):
	month==2?printf("february 28/29."):
	month==3?printf("march 30."):
   month==4?printf("April 30."):
month==5?printf("may 31."):
	month==6?printf("june 30."):
		month==7?printf("jully 31"):
			month==8?printf("August 31."):
				month==9?printf("suptember. 30"):
					month==10?printf("october 31"):
						month==11?printf("november. 30"):
						month==12?	printf("december 31."):
							printf("Invalid month.");
							return 0;
		
}
