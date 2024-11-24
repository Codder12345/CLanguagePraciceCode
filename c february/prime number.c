#include<stdio.h>
int main()
{
	int no,i=2,f=1;
	printf("\nEnter  number=");
	scanf("%d",&no);
	f=1;
	while(i<=no/2)
	{
		if(i%2==0)
		{
		  f=0;
		  break;
		}
		i++;
	}
	if(f)
	{
		printf("number is prime..");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
