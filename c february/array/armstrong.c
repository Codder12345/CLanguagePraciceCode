#include<stdio.h>
int main()
{
	int n,i;
	int a[i];
	printf("Enter array size");
	scanf("%d",&n);
	printf("\n Enter array element");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int temp=a[i];
		int sum=0;
	while(temp!=0)
	{
		int rem=temp%10;
		int j=1;
		int p=1;
		if(j<=rem)
		{
			p=p*i;
			j++;
		}
		sum=sum+p;
		temp=temp/10;
	}
	if(sum==temp)
	{
		printf("%d",a[i]);
	}
	}
	return 0;
}
