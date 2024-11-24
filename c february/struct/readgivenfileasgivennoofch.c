#include<stdio.h>
#include<conio.h>
int  main()
{
	FILE *ptr;
	char ch[100];
	ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\abc1.txt","w");
	if(ptr==NULL)
	{
		printf("\n File not available");
	}
	else{
		 //printf("\n Enter name from user:");
		 //scanf("%c",&ch);
		//fputc(ch,ptr);
	 fputc('B',ptr);
	 fputsc('A',ptr);
	}
	 fclose(ptr);
	return 0;
}
