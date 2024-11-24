#include<stdio.h>
int main()
{
	int base,index,p=1;
	printf("\n Enter value of base and index=");
	scanf("%d%d",&base,&index);
	int i=1;
	while(i<index)
	{
		p=p*base;
		i++;
	}
	printf("%d",p);
	return 0;
}
