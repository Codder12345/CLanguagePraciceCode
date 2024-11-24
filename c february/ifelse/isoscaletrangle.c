#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter angle of a trangle=");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1==a2&&a2==a3&&a3==a1)
	{
		printf("trangle is equilateral");
	}
	else if(a1==a2||a2==a3||a3==a1)
	{
		printf("trangle is isoscale ");
	}
	else
	{
		printf("scalel");
	}
}
