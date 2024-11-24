#include<stdio.h>
int main()
{
	int rem,no,f=0,temp;
	printf("\nEnte number=");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		if(rem==0)
		{
			f=1;
			break;
		}
	}
	no=temp;
	if(f)
	{
		printf("\n%d :is  duck Number",no);
	}
	else
	{
		printf("\n %d :is  Not duck Number",no);
	}
	return 0;
}
