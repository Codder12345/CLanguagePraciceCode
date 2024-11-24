#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter a and b=");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t%d",a,b);
	return 0;
	
}
