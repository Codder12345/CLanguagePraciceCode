#include<stdio.h>
int main()
{
	int n,ch;
do{
	printf("\nEnter your choice=");
	printf("\n1:Display 1 to n prime number:");
	printf("2:Display 1 to n perfect number:");
	printf("3:Display 1 to n Duck number=");
	printf("4:Display 1 to n strong number:");
	printf("5:Display 1 to n Armstrong number:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1;
		
		break;
		
		case 2:
		break;
		
		case 3:
		break;
		
		case 4:
		break;
		
		case 5:
		break;
		
		case 0;
		printf("Exit");
		break;
		default:
		printf("Invalid choice please select valid choice.");	
	}
}
while(ch!=0);
return 0;
}
