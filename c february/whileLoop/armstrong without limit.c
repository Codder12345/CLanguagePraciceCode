#include<stdio.h>
int main()
{
	int rem,p,n,i,temp,count,sum;
	printf("\n Enter value of n=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		++count;
		n=n/10;
	}
	n=temp;
	while(n!=0)
	{
		p=1;
		i=1;
		rem=n%10;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		n=n/10;
		
	}
	if(sum==temp)
	{
		printf("number is armstrong\n");
	}
	else{
		printf("not armsrong\n");
	}
}
