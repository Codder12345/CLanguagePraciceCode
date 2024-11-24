#include<stdio.h>
int main()
{
	int no;
	printf("\n Enter number=");
	scanf("%d",&no);
	no=no<<1;
	no>0?printf("number is positive."):no==0?printf("no is zero."):printf("number is negative.");
	return 0;
	
	
}
