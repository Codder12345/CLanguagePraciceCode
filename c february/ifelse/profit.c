#include<stdio.h>
#include<conio.h>
int main()
{
	int sp,cp;
	printf("Enter selling price and cost price=");
	scanf("%d%d",&sp,&cp);
	if(sp>cp)
	{
		printf("profit:%d",sp-cp);
	}
	else
	{
		printf("Loss:%d",cp-sp);
	}
	return 0;
}
