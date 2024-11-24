#include<stdio.h>
int main()
{
	int no,temp,sum=0;
	int i=1;
	printf("\n Enter no=");
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
	printf("%d",sum);
	no=temp;
	no==sum?printf("no is perfect."):printf("not perfect no.");

	return 0;
}
