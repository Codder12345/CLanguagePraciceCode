#include<stdio.h>
int prime(int);
int count;
int main()
{
	int len;
	printf("\n Enter length number between prime number:");
	scanf("%d",&len);
    prime(len);

}
int prime(int len)
{
	int i=2,j=2;
	while(i<=len)
	{
		count=0;
	while(j<=i/2)
	{
			if(i%j==0)
		{
			count++;
		}
		j++;
	}
	if(count==0)
	
	{
		printf("\n%d",i);
	}
	i++;
	}
}
