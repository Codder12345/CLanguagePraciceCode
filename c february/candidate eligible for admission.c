#include<stdio.h>
#include<conio.h>
int main()
{
	int math,phy,chem,total;
	printf("Enter marks of math=");
	scanf("%d",&math);
	printf("Enter marks of physics =");
	scanf("%d",&phy);
	printf("Enter marks of chemistry=");
	scanf("%d",&chem);
	total=math+phy+chem;
	(math>=65&&phy>=55&&chem>=50)&&(math&&phy>=140)||(total>=180)?printf("The candidate is eligible for admission."):printf("candidate not eligible for admission.");
	return 0;
	
}
