#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("\nEnter number=");
	scanf("%d",&no);
	no%2==0?printf("\n number is even."):printf("\nnumber is odd.");
	return 0;
}
