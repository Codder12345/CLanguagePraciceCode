#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int count=0;
	FILE *ptr;
	ptr=fopen("C://Users//HI//Desktop//lite bill payment//abc.txt","r");
	if(ptr==NULL)
	{
		printf("\n File is not available");
	}
	else{
		//printf("\n read file");
	do{
			ch=  fgetc(ptr);
			printf("%c",ch);
			//count vowel in the file.
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	         	count++;
		}while(ch!=EOF);
		printf("\n number of vowels in file : %d",count);
		}
		fclose(ptr); 
	return 0;
}
