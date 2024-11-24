#include<stdio.h>
#include<conio.h>
int main()
{
	int getperfect(int);//function declaration
	int no;
	printf("\n Enter number from  lenth of perfect no:");
	scanf("%d",&no);
	getperfect(no);//function calling
	return 0;
}
int getperfect(int n)//defination
{
	int i=1,j;
	while(i<=n)
	{
		int j=1,sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("\n%d",i);
		}
		i++;
	}
	
}
