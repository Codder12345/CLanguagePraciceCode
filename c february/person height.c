#include<stdio.h>
#include<conio.h>
int main()
{
	float height;
	printf("Enter person height in centimeter=");
	scanf("%f",&height);
	(height<150.0)?printf("the person is dwarf."):(height>=150.0&&height<195.0)?printf("the person is avrage heighted."):printf(" the person is taller.");
return 0;
}
