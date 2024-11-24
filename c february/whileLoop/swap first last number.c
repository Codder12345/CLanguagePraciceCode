#include<stdio.h>
#include<math.h>
int main()
{
	int no,last,first,p,p1,count=0,temp;
	printf("\nEnter number:");
	scanf("%d",&no);
	printf("\nBefor swapping :%d",no);
	temp=no;
	while(no!=0)
	{
		++count;
		no=no/10;
	}
	no=temp;
	last=temp%10;
	p=pow(no,--count);
	no=no%p1;
	last=last*p;
	no=no*10;
	no=last+no+first;
	printf("\n After swapping %d",no);
	getch();
}
