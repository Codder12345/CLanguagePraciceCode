#include<stdio.h>
void naturalnumber(int);
int main()
{
	int limit;
	printf("\n Enter limit");
	scanf("%d",&limit);
	naturalnumber(limit);
	return 0;
}
void naturalnumber(int limit)
{
	
	static int i=1;
	if(limit!=0)
	{
		naturalnumber(limit-1);
		printf("%d",i);
		i++;
	}
	
}
