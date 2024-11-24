#include<stdio.h>
#include<conio.h>
int main()
{
	int qty,rate,tot,gst,gtot;
	printf("Enter quantity and rate=");
	scanf("%d %d",&qty,&rate);
	tot=qty*rate;
	gst=tot*18/100;
	gtot=gst+tot;
	printf("total bill= %d",gtot);
	return 0;
}
