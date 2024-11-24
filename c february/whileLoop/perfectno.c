#include<stdio.h>
int main()
{
	int no,rem,sum=0,i=1,temp;
	printf("\nEnter number=");
	scanf("%d",&no);
	temp=no;
	while(i<no)
{
	if(no%i==0)
	
	{
		sum=sum+i;
	}
	i++;
}
no=temp;
no==sum ?printf(" \n%d is a perfect no.",no):printf("\n%d is not perfect no %d",no);
return 0;
}
