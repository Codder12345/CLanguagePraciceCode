#include<stdio.h>
int main()
{
	int no,i,count;
	printf("Enter number=");
	scanf("%d",&no);
	     count=0;
		i=1;
		while(i<=no)
		{
			if(no%i==0)
			{
			
		     ++count;
			}
			i++;
		}
			if(count==2)
	{
		printf("prime number.");
	}
	else 
	{
		printf("not prime.");
	}
	
	return 0;
}
