#include<stdio.h>
int main()
{
	int no;
	printf("Enter number of month=");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf("january 31 days.");
			break;
		case 2:
		printf(" february 29/28 days.");
		break;	
		case 3:
			printf("march 31 days.");
			break;
			case 4:
			printf("april 30 days.");
			break;
			case 5:
			printf("may 31 days.");
			break;
			case 6:
			printf("jun 30 days.");
			break;
			case 7:
			printf("jully 31 days.");
			break;
			case 8:
			printf("August 31 days.");
			break;
			case 9:
			printf("subpteber 30 days.");
			break;
			case 10:
			printf("october 31 days.");
			break;
			case 11:
			printf("november 30 days.");
			break;
			case 12:
			printf("december 31 days.");
			break;
		default:
		printf("Invalid month.");	
	}
	return 0;
}
