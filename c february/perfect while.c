#include<stdio.h>
#include<conio.h>
int main()
{
	int no,c,sum=0,i=1;
	printf("Enter no=");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	
if(sum==no)
{
	printf("\n perfect no.");
}
else
{
	printf("not perfect.");
}
	return 0;
}
