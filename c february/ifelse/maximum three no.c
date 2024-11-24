#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value =");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("maximum number is a:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("maximum number is b:%d",b);
	}
	else
	{
		printf("maximum number is:%d",c);
	}
	return 0;
}
