#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c,Add,Div,Mul,rem,sub;
	printf("Enter value of a and b=");
	scanf("%d %d",&a,&b);
	Add=a+b;
	sub=a-b;
	Div=a/b;
	Mul=a*b;
	rem=a%b;
	printf("\nAddition=%d",Add);
	printf("\nSubstraction=%d",sub);
	printf("\nDivision=%d",Div);
	printf("\nMultiplication=%d",Mul);
	printf("\n Reminder=%d",rem);
	return 0;
	
}
