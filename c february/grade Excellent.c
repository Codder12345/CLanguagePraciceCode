#include<stdio.h>
int main()
{
	int grade;
	printf("Enter grade=");
	scanf("%c",&grade);
	(grade=='E')?printf("Excellent"):(grade=='V')?printf(" very good"):(grade=='G')?printf("good"):(grade=='A')?printf("Average"):(grade=='F')?printf("fail"):printf("Invalid.");
	return 0;
	
}
