#include<stdio.h>
int  Armstrong(int);
int main()
{
	int no;
	printf("Enter number");
	scanf("%d",&no);
	Armstrong(no);
	
}
int i=1,j;
int Armstrong(int no)
{
	int count=0,temp=no;
	while(no!=0)
	{
	  no=no/10;
	  count++;	
	}
	
	for(i=1;i<=temp;i++)
	{
		rem=i%10;
		i=i/10;
		int p=1;
		for(j=1;j<=count;j++)
		{
		p=p*rem;
		}
		sum=sum+p;
		if()
	}
	
	
}
