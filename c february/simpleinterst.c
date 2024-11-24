#include<stdio.h>
#include<conio.h>
int main()
{
	int rate,time,Sinterst,pamount;
	printf("\nEnter principle amount");
	scanf("%d",&pamount);
	printf("\nEnter rate and time=");
	scanf("%d %d",&rate,&time);
	Sinterst=pamount*rate*time/100;
	printf("\n simple interst=%d",Sinterst);
	return 0;
}
