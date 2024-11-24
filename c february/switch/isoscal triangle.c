#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter angle of a triangle=");
	scanf("%d%d%d",&a1,&a2,&a3);
	switch(a1==a2&& a2==a3&& a3==a1)
	{
		case 1:
		printf("triangle is equilateral.");
		break;
		case 0:
		switch(a1==a2||a2==a3||a3==a1)
		{
			case 1:
				printf("triangle is isoscale.");
			break;
			case 0:

				printf("triangle is scalen.");
			break;
			
		}
		break;
		
	default:
				printf("invalid choice:");	
	}
}
