#include<stdio.h>
int main()
{
	int digit,sum=0,rem;
	printf("\n Enter digits=");
	scanf("%d",&digit);
	while(digit!=0)
	{
		rem=digit%10;
		digit=digit/10;
		sum=sum+rem;
	}
	printf("sum of digits=%d",sum);
	return 0;
}
