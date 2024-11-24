#include<stdio.h>
int main()
{
	int ch,a,b,c;
	printf("Enter value of a and b=");
	scanf("%d%d",&a,&b);
	printf("\nselect your choice:");
	printf("\n1.Addition.");
	printf("\n2.substraction.");
	printf("\n3.Multiplication.");
	printf("\n4.division.");
	printf("\nEnter choice= ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		c=a+b;
		printf("\nAddition:%d",c);
		break;
		case 2:
			c=a-b;
		printf("\nSubstraction:%d",c);
		break;
		case 3:
		c=a*b;
		printf("\nMultiplication:%d",c);
		break;
		case 4:
		c=a/b;
		printf("\ndivision:%d",c);
		break;
		default:
		printf("\nInvalid choice.");	
			
	}
	return 0;
}
