#include<stdio.h>

int main()
{
	int i,j ,size,k;
	
	printf("Enter the Size of Array :");
	scanf("%d",&size);
	int a[size];
	printf("Enter Element in Array :");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);	
	}
	

	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		
			if(a[i]>a[j])
			{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	}
	
	printf("After Sorting :");
		
	for(i=0;i<size;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\nenter the kth element do you want to find:");
	scanf("%d",&k);
	
	printf("\nThe kth largest element is : %d",a[i-k]);
	return 0;
}
