#include<stdio.h>
#include<conio.h>
int main()
{
	int bs,da,hra,gs;
	printf("Entr basic salary=");
	scanf("%d",&bs);
	bs>=0 && bs<=10000?printf("hra is:%d\n Da is :%d",(hra=bs*0.2),(da=bs*0.8)):bs>=10000&&bs<=20000?printf("hra is :%d \n Da is :%d",(hra=bs*0.25),(da=bs*0.9)):printf("hra is :%d \n da is:%d",(hra=bs*0.3),(da=bs*0.95));
	gs=bs+hra+da;
	printf("\nGross salary=%d",gs);
	return 0;
}
