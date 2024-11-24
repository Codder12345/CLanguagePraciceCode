#include<stdio.h>
#include<conio.h>
int main()
{
	int t1,t2,t3,sum;
	printf("Enter  is angle of a trangle= ");
	scanf("%d%d%d",&t1,&t2,&t3);
	sum=t1+t2+t3;
	if(sum==180)
	{
		printf("trangle is valid:%d",sum);
	}
	else
	{
		printf("trangle is not valid:%d",sum);
	}
}
