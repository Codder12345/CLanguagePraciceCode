#include<stdio.h>
int main()
{
	int rem,p,no,sum=0;
	printf("\n Enter number=");
	scanf("%d",&no);
	
		p=no*no;
		while(p!=0)
		{
			rem=p%10;
			sum=sum+rem;
	        p=p/10;
		}
        sum==no?printf("\n neon number."):printf("\n not neon number.");
	}
