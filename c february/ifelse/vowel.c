#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,vowelU,vowelL;
	printf("Enter any alphabate=");
	scanf("%c",&ch);
	vowelU=ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
	vowelL=ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
	if(vowelU||vowelL)
	{
		printf("character is vowel:%c",ch);
	}
	else
	{
		printf("character is constant:%c",ch);
	}
	return 0;
	
}
