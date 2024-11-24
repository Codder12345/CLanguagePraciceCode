#include<stdio.h>
int main()
{
	int unit, amt,sc,tot;
	printf("Enter unit =");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit*0.50;
	}
	else if (unit<=150)
	{
		amt=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{                               
		amt=100+(unit-150)*1.20;
	}
	else
	{
		amt=220+(unit-250)*1.50;
	}
	sc=amt*20/100;
	tot=amt+sc;
	printf("totalbill=%d",tot);
}
