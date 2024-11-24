#include<stdio.h>
int main()
{
	int i,n,k,j;
	int a[i];
	printf("\n Enter array size");
	scanf("%d",&n);
	printf("Enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n soart array");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("Display array element");
     for(i=0;i<n;i++)
     {
     	printf("%d",a[i]);
	 }
	 printf("\n Enter value of k");
	 scanf("%d",&k);
	 printf("%d",a[i-k]);
	 return 0;

	
}
