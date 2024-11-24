#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Character :");
	scanf("%c",&ch);
	switch(ch>=48&&ch<=57)
	{
		case 1:
			printf("Character is digit...");
			break;
		case 0:
		    switch((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
		    {
		    	case 1:
		    		printf("Character is alpha.");
		    		break;
		    	case 0:
				    printf("Character is special symbole..");
					break;	
					default:
	              printf("Invaild Input...");
			}
	
	}
	getch();
}
