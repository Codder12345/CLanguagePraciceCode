#include<stdio.h>
int perfect(int);
int Armstrong(int);
int prime(int);
int main()
{
	int num;
	printf("\n Enter any number:");
	scanf("%d",&num);
	if(perfect(num))
	{
		printf("\n %d  is perfect number:",num);
	}
	else
	{
		printf("%d  is not perfect number:",num);
	}
	//Armstrong number
	if(Armstrong(num))
	{
		printf("\n %d is  Armstrong number:",num);
	}
	else
	{
		printf("\n %d is not Armstrong number:",num);
	}
	
	//prime number
	if(prime(num))
	{
		printf("\n  %d is prime number:",num);
	}
	else
	{
		printf("\n %d not prime number:",num);
	}
	return 0;
}

int perfect(int num)
{
	int i,j=1,sum=0;
	int temp=num;
	for(i=1;i<num;i++)
	{
	if(num%i==0)
	{
		sum=sum+i;
	}
	}
	return (sum==temp);
}
int Armstrong(int num)
{
	int i=1, rem,sum=0;
	int temp=num;
   while(num!=0)
   {
		int p=0;
		rem=num%10;
		p=rem*rem*rem;
		sum=sum+p;
		num=num/10;
    }
return (sum==temp);
}
int prime(int num)
{
   int i;
   for(i=2;i<num/2;i++)
   {
   	if(num%i==0)
   	{
   	   return 0;
	}
	return 1;
	
   }
}
