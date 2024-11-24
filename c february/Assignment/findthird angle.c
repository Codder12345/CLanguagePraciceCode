#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter two angle=");
	scanf("%d%d",&a1,&a2);
	a3=180-(a1+a2);
	if(a1+a2-180)
	{
		if(a3>0)
	{
			printf("third angle %d",a3);
	}
	}
	else
	{
		printf("Invalid.");
	}
	return 0;
}
