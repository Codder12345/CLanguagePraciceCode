#include<stdio.h>
int main()
{
	int ch,a,b,c,no;
	printf("\nselect your choice for driven:");
	printf("\n1:number is positive negative  or zero.");
	printf("\n2:number is even or odd:");
	printf("\n3: maximum number between three no:");
	printf("\nEnter choice=");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Enter number=");
		scanf("%d",&no);
		if(no>0)
		{
			printf(" %d Number is Psitive.",no);
		}
		else if(no==0)
		{
			printf("\nnumber is zero.");
		}
		else
		{
			printf("number is negative.");
		}
			break;
		case 2:
			printf("Enter number=");
			scanf("%d",&no);
			if(no%2==0)
			{
				printf("no is even.");
			}
			else
			{
				printf("no is odd.");
			}
			break;
			case 3:
            printf("\nEnter value of a b and=");
			scanf("%d%d%d",&a,&b,&c);				
	         if(a>b && a>c)
	         {
	         	printf(" \nA is greater :%d",a);
			 }
			 else if(b>a && b>c)
			 {
			 	printf("\n B is greater:%d",b);
			 }
			 else
			 {
			 	printf("\n C is greater:%d",c);
			 }
			 break;
			default:
				printf("\nInvalid choice.");
	}

}
