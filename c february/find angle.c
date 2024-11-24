#include<stdio.h>
#include<conio.h>
int main()
{
	int a1,a2,a3;
	printf("\nEnter two angle");
	scanf("%d%d",&a1,&a2);
	a3=180-(a1+a2);
	printf("\nthird angle=%d",a3);
	return 0;
}
