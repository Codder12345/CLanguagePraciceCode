#include<stdio.h>
#include<conio.h>
int main()
{
	char ch ,lc,up;
	printf("\n Enter any alphabate=");
	scanf("%c",&ch);
	
   lc=ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
   up=ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
   lc||up?printf("\nAlphabate is vowel."):printf("\n not vowel.");
	return 0;
}
