#include<stdio.h>
#include<conio.h>
int main()
{
	int t1,t2,t3,sum=0;
	printf("\nEnter value of third side angle of trangle ");
	scanf("%d%d%d",&t1,&t2,&t3);
	sum=t1+t2+t3;
	sum==180?printf("\nTrangle is valid."):printf("\nTrangle is not valid.");
	return 0;
}

