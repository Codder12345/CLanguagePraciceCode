#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	  
	switch(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		case 1:
			printf("%c is vowel.",ch);
			break;
		case 0:
		printf("%d is consonant.",ch);
		break;
		default:
		printf("Invalid character.");	
		
	}
}
