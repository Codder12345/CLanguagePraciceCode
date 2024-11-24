#include<stdio.h>
int main()
{
	int no;
	printf("Enter no=");
	scanf("%d",&no);
	no=no & 1;
	printf("%d",no);

}
