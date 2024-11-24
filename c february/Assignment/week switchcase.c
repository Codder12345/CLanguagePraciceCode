#include<stdio.h>
int main()
{
	int week;
	printf("Enter number of a day bitween 1 to 7=");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("sunday.");
			break;
			case 2:
			printf("monday.");
			break;
			case 3:
			printf("Tuesday.");
			break;
			case 4:
			printf("wednesday.");
			break;
			case 5:
			printf("Thusday.");
			break;
			case 6:
			printf("Friday.");
			break;
			case 7:
			printf("saturday.");
			break;
			default:
			printf("Invalid day.");
			break;	
			
	  }  
}
