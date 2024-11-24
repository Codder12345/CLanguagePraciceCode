#include<stdio.h>
int main()
{
	int perfect(int);
	int no;
	printf("\n Enter number:");
	scanf("%d",&no);
	 int sum=perfect(no);
	 if(sum==no)
	 {
	 	printf("\nPERFECT NUMBER");
	 }
	 else
	 {
	 	printf("\nNOT PERFECT NUMBER.");
	 }
	 return 0;
}

int perfect( int  no)
{
	int sum,i;
	sum=0;
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
	}
	}
	printf("%d",sum);
	return sum;
}

