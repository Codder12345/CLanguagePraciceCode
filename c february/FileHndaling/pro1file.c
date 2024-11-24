#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch[60];
	ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\abc.txt","w");
	if(ptr==NULL)
	{
		printf("open file");
	}
	else{
		printf("\n Enter string from user");
		gets(ch);
		fputs(ch,ptr);
	}
	return 0;
}

