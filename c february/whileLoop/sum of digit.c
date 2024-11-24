#include<stdio.h>
int main()
{
	int digit,sum=0,rem;
	printf("\n Enter  any digit=");
	scanf("%d",&digit);
	while(digit!=0)
	{
		rem=digit%10;
		digit=digit/10;
		sum=sum+rem;
	}
	printf("\n sum of digit:%d",sum);
	return 0;
}
