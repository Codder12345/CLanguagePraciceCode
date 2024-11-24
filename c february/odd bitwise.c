#include<stdio.h>
int main()
{
	int no;
	printf("Enter no=");
	scanf("%d",&no);
	no=no^1;
	no=no+1;
	no%2==0?printf("number is even."):printf("no is odd.");
}
