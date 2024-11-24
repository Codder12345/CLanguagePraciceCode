#include<stdio.h>
int main()
{
	int no,rem,count=0,p,sum=0,temp,i,j=1;
	printf("\n Enter number=");
	scanf("%d",&no);
	temp=no;
     while(j<=no)
     {
     	while(j!=0)
	{
		++count;
		no=no/10;
	}
	j=temp;
	while(j!=0)
	{
		i=1,p=1;
		rem=j%10;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		j=j/10;
	}
	 }
	 printf("%d",j);
	 j++;
	return 0;
}
