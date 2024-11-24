#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter value for a and b=");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("greater number is:%d",a);
	}
	else
	{
		printf("greater number is:%d",b);
	}
	return 0;
}
