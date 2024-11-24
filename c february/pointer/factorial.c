#include<stdio.h>
int main()
{
	int num,fact=1;
	 int *pn=&num;
	 int *f=&fact;
	printf("\n Enter any number=");
	scanf("%d",&num);
	 while(*pn!=0)
	{
		*f=*f*(*pn);
		num--;
	}
	printf(" factorial is %d",*f);
	return 0;
}
