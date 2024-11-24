#include<stdio.h>
#include<conio.h>
int main()
{
	int t1,t2,t3;
	printf("\nEnter value of third angle of trangle ");
	scanf("%d%d%d",&t1,&t2,&t3);
	
	t1==t2&&t2==t3?printf("\nTrangle is equilateral."):t1==t2||t2==t3||t3==t1?printf("\n Trangle is isoscale."):printf("\nTrangle is  scalene.");
	return 0;
}

