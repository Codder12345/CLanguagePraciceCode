#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	if(no%5==0 && no%11==0)
	{
		printf("number divisible by 5 and 11:%d",no);
	}
	else
	{
		printf("number not divisible by 5 and 11:%d",no);
	}
	return 0;
	
}
