#include<stdio.h>
int main()
{
	int count,n,rem,f,sum=0,temp;
	printf("Enter number=");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		count=1;
		f=1;
		rem=n%10;
		
		while(count<=rem)
		{
			f=f*count;
			++count;
		}
		sum=sum+f;
		n=n/10;
	}
	printf(" \nsum %d\n",sum);
	sum==temp?printf("\nnumber is strong."):printf("\nnot strong number.");
	return 0;
}
