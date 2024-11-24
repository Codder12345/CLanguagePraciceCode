#include<stdio.h>
int main()
{
	int n,i;
	int a[i];
	printf("\n Enter array size");
	scanf("%d",&n);
	printf("\n Enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<=n;i++)
{
int temp=a[i];
int sum=0;
while(temp!=0)
{
	int j=1,p=1;
	int rem=temp%10;
	
	if(j<=rem)
	{
	  p=p*j;
		j++;
	}
	sum=sum+p;
	temp=temp/10;
}
temp=a[i];
if(sum==a[i])
{
	printf("%d",a[i]);
}
}
return 0;
}
