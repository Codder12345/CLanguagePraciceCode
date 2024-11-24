#include<stdio.h>
int main()
{
	int n,rem,sum=0,p=1,i;
printf("\nEnter number=");
scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{
		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			p=p*rem;
			n=n/10;

		}
	}
	 sum==p?printf("\n spy number."):printf("\n not spy number.");
	return 0;
	
}
