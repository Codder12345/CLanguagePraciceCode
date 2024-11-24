#include<stdio.h>
int main()
{
	int n,i,arr[10];
	int *ptr;
	ptr=&arr[0];
	printf("\nInput size of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr[n-1];
	printf("\nThe element of array in revers order are:");
	for(i=n;i>0;i--)
	{
		printf("\n %d--->%d",ptr,*ptr);
		ptr--;
	}
	printf("\n \n");
	
}
