#include<stdio.h>
int main()
{
	int no,first,last,sum=0;
	printf("Enter any no=");
	scanf("%d",&no);
	last=no%10;
	while(no>10)
	{
		
		no=no/10;
		
		
	}
	
	sum=no+last;
	printf("\nsum of first and last %d+%d sum=%d",no,last,sum);
    
	return 0;
}











