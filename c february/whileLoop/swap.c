#include<stdio.h>
int main()
{
	int no,first,last;
	printf("Enter any no=");
	scanf("%d",&no);
	last=no%10;
	while(no>=10)
	{
		
		no=no/10;
		
		
	}
	first=no;
	printf("before swaping \n first digit=%d\n Last digit id=%d\n",first,last);
	first=first+last;
	last=first-last;
	first=first-last;
	printf("After swapping\n first digit=%d\n Last digit is =%d\n",first,last);
	return 0;
}











