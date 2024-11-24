#include<stdio.h>
int main()
{
	int no,rem,rev;
	printf("Enter number");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("%d",rev);
	
}
