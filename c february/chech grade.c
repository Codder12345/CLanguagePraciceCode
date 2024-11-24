#include<stdio.h>
#include<conio.h>
int main()
{
	int grade;
	printf("\n Enter grade=");
	scanf("%c",&grade);
	(grade=='E')?printf("\n Excellent."):(grade=='V')?printf("\n very good."):(grade=='G')?printf("\n Good."):(grade=='A')?printf("Average."):(grade=='F')?printf("fail"):printf("invalid.");
	return 0;
	
}
