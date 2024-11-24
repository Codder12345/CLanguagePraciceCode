#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n Enter ch ");
	scanf("%c",&ch);
	
	(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')?printf("character alphabate"):ch>='0'&&ch<='9'?printf("\n character is digit"):printf("special symbol");
	return 0;
}
