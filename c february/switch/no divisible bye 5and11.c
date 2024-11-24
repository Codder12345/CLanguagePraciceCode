#include<stdio.h>
int main()
{
	int no;
	printf("\nEnter no:");
	scanf("%d",&no);
	switch(no%5==0&& no%11==0)
	{
		case 1:
			printf("no divisible by 5 and 11: %d",no);
			break;
		case 0:
		printf("no not divisible:%d",no);	 
		break;
		default:
			printf("Invalid choice.");
	}
}
