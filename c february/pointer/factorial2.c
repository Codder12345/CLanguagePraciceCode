#include<stdio.h>
int main()
{
	int num,*f,i;
	printf("\n Enter any number=");
	scanf("%d",&num);
      int p=1;
	 for(i=1;i<num;i++)
	{
		p=*f*i;
	}
	printf(" factorial is %d",*p);
	return 0;
}
