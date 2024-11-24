#include<stdio.h>
int main()
{
   int n,d,i=0,temp,count;
	printf("Enter  the number:");
	scanf("%ld",&n);
	while(i<=9)
	{
		temp=n;
		count=0;
		while(n!=0)
		{
			d=n%10;
			n=n/10;
			if(d==i)
			{
				count++;
			}
		}
		n=temp;
		printf("The %d in %d is %d\n",i,n,count);
		i++;
	}
}
