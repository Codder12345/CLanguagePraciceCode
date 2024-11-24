#include<stdio.h>
int main()
{
	char ch,vowelU,vowelL;
	printf("Enter character=");
	scanf("%c",&ch);
	vowelU=ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
	vowelL=ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
	if(vowelU||vowelL)
	{
		printf("'%c' is a vowel.",ch);
	}
	else
	{
		printf("'%c'character is consonant.",ch);
	}
	return 0;
}
