#include<stdio.h>
int prime(int x);
int main()
{
	int no;
	printf("Enter number");
	scanf("%d",&no);
	int result=prime(no);
	if(result)
	{
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
int  count=0;
int prime(int x)
{	
	int i=1;
while(i<=x)
{
		if(x%i==0)
	{
		count++;
		
	}
	i++;
}
	
	if(count==2)
	{
	return 1;
	}
	else{
		return 0;
	}
	prime(x);
	
}
