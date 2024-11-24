#include<stdio.h>
int main()
{
	int no,temp,count=0;
	printf("Enter any no=");
	scanf("%d",&no);
	temp=no;
	while(no>=0)
	{
		no=no/10;
		no--;
		count++;
	}
	no=temp;
	
	printf(" %d no of digits :%d",no,count);
}
