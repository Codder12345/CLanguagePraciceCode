#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,count=0;
	int a[i];
	printf("Enter array size");
	scanf("%d",&n);
	printf("\narray element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int j=2;
	if(a[i]%j==0)
	{
		count++;
	}
if(count==2)
	{
		printf("%d",a[i]);
	}	
	}
	
return 0;	
}
