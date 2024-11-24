#include<stdio.h>
#include<conio.h>
int main()
{
	int length,m,k;
	printf("\nEnter length  centimeter=");
	scanf("%d",&length);
	 m=length/100;
	 k=length/1000;
	 printf("\n Length convert  centimeter into meter=%d ",m);
	 printf("\n Length convert meter into kilometer=%d",k);
	 return 0;
}
