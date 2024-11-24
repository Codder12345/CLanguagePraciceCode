#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("\n Enter number=");
	scanf("%d",&no);
	no>0?printf("\n Number is positive."):no==0?printf("\n number is zero."):printf("\n Number is negative .");
	return 0;
}
