#include<stdio.h>
int main()
{
	int age;
	printf("Enter age=");
	scanf("%d",&age);
	if(age>=21)
	{
		printf("person eligible for vote.");
	}
	else
	{
		printf("person not eligible for vote.");
	}
}
