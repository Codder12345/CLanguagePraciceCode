#include<stdio.h>
#include<conio.h>
int main()
{
	int length,breadth;
	float area;
	printf("Enter length and breadth of rectangle=");
	scanf("%d %d",&length,&breadth);
	area=length*breadth;
	printf("\n Area of rectangle=%f",area);
	return 0;
}
