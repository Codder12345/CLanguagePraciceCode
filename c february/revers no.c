#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("\n Enter no=");
	scanf("%d",no);
	no=(no%10)*100+((no/10)%10)*10+(no/100);
	printf("revers=%d",no);
	return 0;
	
}
