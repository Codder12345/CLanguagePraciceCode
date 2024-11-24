#include<stdio.h>
int main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	if(no>0)
	{
		printf("positive number:%d",no);
	}
	else
	{
		printf("negative number:%d",no);
	}
	return 0;
}
