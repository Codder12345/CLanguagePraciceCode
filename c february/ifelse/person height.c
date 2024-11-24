#include<stdio.h>
int main()
{
	int height;
	printf("Enter height of a person=");
	scanf("%d",&height);
	if(height<150.0)
	{
		printf("The person is  Dwarf.");
	}
	else if(height>=150.0 && height<=165.0)
	{
		printf("The person is average heighted.");
	}
	else if(height>=165.0&& height<=195.0)
	{
		printf("the prson is taller.");
	}
	else
	{
		printf("Invalid height.");
	}
}
