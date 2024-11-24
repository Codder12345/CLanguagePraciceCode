#include<stdio.h>
int main()
{
    int no,j=1,temp,rem,count=0;
	printf("\n Enter number=");
	scanf("%d",&no);
	while(j<=9)
	{
		temp=no;
		count=0;
		while(no!=0)
		{
			rem=no%10;
		    no=no/10;
		if(rem==j)
		{
			++count;	
		}
		}
	     no=temp;
		printf("The %d in %d is %d\n",j,no,count);
		j++;	
	}
}
