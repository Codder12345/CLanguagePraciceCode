#include<stdio.h>
int main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	
	 (no^1==no+1)%2==0?printf("Even no.%d",no):printf("odd.");
	return 0;
}
