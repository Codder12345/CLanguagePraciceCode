#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("Enter no=");
	scanf("%d",&no);
	no=no/10;
	printf("\nRemove last digit=%d",no);
	return 0;
}
