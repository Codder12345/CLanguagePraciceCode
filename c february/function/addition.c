#include<stdio.h>
int c;
Add(int a,int b)
{
	c=a+b;
	printf("%d",c);
}

int main()
{
	int a,b,ch;
	do{
		printf("1:ADD");
		printf("2:MUL");
		printf("3DIV");
		printf("\nEnter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter a and b=");
	scanf("%d%d",&a,&b);
	Add(a,b);
	break;
	default:
		printf("Invalid choce");
		
		}		
		
	}
}
