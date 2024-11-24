#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Enter array element");
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
