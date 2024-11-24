#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	printf("\n Enter number=");
	scanf("%d",&no);
	no%5==0&&no%11==0?printf("\nnumber divisible by 5 and 11= %d",no):printf("\n number not divisible .");
	return 0;
}
