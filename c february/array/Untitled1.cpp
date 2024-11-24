#include<stdio.h>
int main()
{
	int n,i;
	int a[i];
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int f=0;
		int j=1;
		while(j=a[i]/2)
		{
			if(j%i==0)
			{
				f=1;
			}
		}
		if(f==0)
		{
			printf("\t%d",a[i]);
		}
	}
	return 0;
}
