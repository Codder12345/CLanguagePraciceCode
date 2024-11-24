#include<stdio.h>
int main()
{
	int no,i=1,p=1,temp;
	printf("\n Enter number =");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		p=p*no;
		no--;
	}
	no=temp;
	printf("factorial of %d is :%d",temp,p);


	return 0;
}
