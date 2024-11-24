#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("\nEnter value of a b and c=");
	scanf("%d%d%d",&a,&b,&c);
	a>b&&a>c?printf("\n maximum number is a= %d",a):b>a&&b>c?printf("\n maximum number is b=%d",b):printf("\n maximum number is c=%d",c);
	return 0;
}
