#include<stdio.h>
int factorial(int);
int main()
{
	int no;
	printf("\nEnter nuumber:");
	scanf("%d",&no);
	int result=factorial(no);
	printf("%d",result);
	return 0;
}
int factorial(int no)
{
	int f;
	if(no==0)
	{
		return 1;
	}
	else
	{
		f=no*factorial(no-1);
	}
	return f;
}
