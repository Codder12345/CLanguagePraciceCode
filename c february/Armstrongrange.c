#include<stdio.h>
#include<math.h>
int Armstrong(int);
int main()
{
	int no;
	printf("Enter number");
	scanf("%d",&no);
	Armstrong(no);
	
}
int i=1,rem,p;
int Armstrong(int no)
{
	while(i<=no)
	{
		int temp=i;
		int count=0,sum=0;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	temp=i;
	while(temp!=0)
	{
		rem=temp%10;
		int j=1;
	   p=pow(rem,count);
//	    if(j<=count)
//	    {
//	    	p=p*rem;
//	    	j++;
//	    }
	     sum=sum+p;
	  	temp=temp/10;
	}
	if(sum==i)
	{
		printf("%d\n",i);
    }
    i++;
    Armstrong(no);
	}
}
