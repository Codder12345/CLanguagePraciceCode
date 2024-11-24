#include<stdio.h>
int main()
{
	int a[5],i,n,ceil,floor;
	printf("\n Enter array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter   number to find celling and floor");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[0]>n)
		{
			ceil=a[i];
			floor=-1;
			break;
		}
		if(a[4]<n)
		{
			ceil=a[i];
			floor=-1;
			break;
		}
		if(a[4]>n)
		{
			ceil=a[i];
			floor=-1;
			break;
		}
		if(a[i]==n)
		{
			ceil=a[i];
			floor=a[i];
		}
		if(a[i]<n && a[i+1]>n)
		{
			ceil=a[i+1];
			floor=a[i];
			break;
		}
	}
	printf("\n floor=%d ceil=%d",floor,ceil);
	//printf("%d=%d\t%d",floor,ceil);
	return 0;
}
