#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter array size:");
	scanf("%d",&n);
	int a[i];
	printf("\nEnter array element");
	 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		int f=0;
		int j=2;
		while(a[i]!=0)
		{
			if(a[i]%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			printf("\t%d",a[i]);
		}
	
	}
	return 0;
}
