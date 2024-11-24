#include<stdio.h>
int main()
{
	int  no;
	printf("Enter number");
	scanf("%d",&no);
	prime(no);
}
int i=1,j;
int prime(int x)
{
	
	if(i<=x)
	{
		int count=0;
	for(j=1;j<=i;j++)
	{
			if(i%j==0)
		{
		count++;	
		}
	}
	if(count==2)
	{
		printf("%d\n",i);
	}
	i++;
	}
	prime(x);
}
