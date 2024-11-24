#include<stdio.h>
int main()
{
	int grade;
	printf("Enter grade=");
	scanf("%c",&grade);
	if(grade=='E')
	{
		printf("Execellent.");
	}
	else if(grade=='V')
	{
		printf("Very good.");
		
	}
	else if(grade=='G')
	{
		printf("Good");
	}
	else if(grade=='A')
	{
		printf("Average.");
	}
	else if(grade=='F')
	{
		printf("Fail.")
	}
	else
	{
		printf("Invalid grade.");
	}
}
