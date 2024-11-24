#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("number is even:%d",no);
	}
	else
	{
		printf(" number id ODD:%d",no);
	}
	return 0;
}
