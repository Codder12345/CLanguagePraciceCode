#include<stdio.h>
#include<strings.h>
int main()
{
	char ch[100],i,count=0,vowel=0;
	printf(" Enter string from users: ");
	gets(ch);
	printf("%s",ch);
	printf("\nVowels is:");
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='a'||ch[i]=='e'||ch[i]=='o'||ch[i]=='u')
		{
         printf("\t%c",ch[i]);
			vowel++;
		}
		count++;
	}
	printf("\n length of striing :%d",count);
	printf("\n count vowels in the string: %d",vowel);
	return 0;
	
}
