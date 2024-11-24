#include<stdio.h>
int main()
{
	int no,rem,p=1,temp;
	printf("\nEnter number=");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		p=p*rem;
	}
	no=temp;
	printf("product of a %d: is %d",no,p);
	return 0;
	
}
