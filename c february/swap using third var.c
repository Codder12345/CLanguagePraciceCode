#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("Enter value of a and b=");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d\t %d",a,b);
	return 0;
}
