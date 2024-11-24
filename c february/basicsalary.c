#include<stdio.h>
#include<conio.h>
int main()
{
	int Bsal,Gsal,DA,HRA;
	printf("\n Enter basic salary=");
	scanf("%d",&Bsal);
	Bsal>0&&Bsal<=10000?printf("HRA id: %d \n DA is:%d",(HRA=Bsal*0.2),(DA=Bsal*0.8))
}
