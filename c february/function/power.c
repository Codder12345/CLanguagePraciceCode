#include<stdio.h>
#include<math.h>
int main()
{
	void power(int,int);
	int base, index;
	printf("\n Enter base and index:");
	scanf("%d%d",&base,&index);
	 power(base,index);
	
}
void power(x,y)
{
	int p=1,i;
	for(i=1;i<=y;i++)
	{
		p=p*x;
	}
	printf("%d",p);
}
