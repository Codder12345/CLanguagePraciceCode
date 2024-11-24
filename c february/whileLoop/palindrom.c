#include<stdio.h>
int main()
{
	int no,rev=0,temp,rem;
	printf("\nEnter number=");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
	  	rev=rev*10+rem;
	    no=no/10;	
	  
	}
	
	  no=temp;
	  temp==rev?printf("\n%d is palindrom number.",rev):printf("\n%d is not palindrom no.",rev);

	return 0;
	
}
