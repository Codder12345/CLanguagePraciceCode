#include<stdio.h>
int main()
{
	
	int cash;
	printf("Enter cash=");
	scanf("%d",&cash);
	int n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,coins5=0,coins2=0,coins1=0;
	printf("Total Cash:%d",cash);
	if(cash>=500)
	{
		n500 = cash/500;
		cash = cash-n500*500;
		printf("\nRemaing Amount:%d and Notes of 500X%d",cash,n500);
	}
	if(cash>=200)
	{
		n200 = cash/200;
		cash = cash-n200*200;
		printf("\nRemaing Amount:%d and Notes of 200X%d",cash,n200);
	}
   if(cash>=50)
	{
		n50 = cash/50;
		cash = cash-n50*50;
		printf("\nRemaing Amount:%d and Notes of 50X%d",cash,n50);	
	}
	if(cash>=20)
	{
		n20 = cash/20;
		cash = cash-n20*20;
		printf("\nRemaing Amount:%d and Notes of 20X%d",cash,n20);	
	}
	if(cash>=10)
	{
		n10 = cash/10;
		cash = cash-n10*10;
		printf("\nRemaing Amount:%d and Notes of 10X%d",cash,n10);
	}
   if( cash>=5)
	{
		coins5 = cash/5;
		cash = cash - coins5*5;
		printf("\nRemaing Amount:%d and Coins of 5X%d",cash,coins5);
	}
	 if( cash>=2)
	{
		coins2 = cash/2;
		cash = cash - coins2*2;
		printf("\nRemaing Amount:%d and Coins of 2X%d",cash,coins2);
	}
	 if( cash>=1)
	{
		coins1 = cash/1;
		cash = cash - coins1*1;
		printf("\nRemaing Amount:%d and Coins of 1x%d ",cash,coins1);
	}
	return 0;
}
