#include<stdio.h>
int main()
{
	int a[5],i,j;
	printf("Enter array element=");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);	
    }
    printf("\n Befor sorting array:");
	for(i=0;i<5;i++)
	{
	printf("%d",a[i]);	
    }    
    //apply sorting logic:
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
	{
		if(a[i]>a[j])
		{
			 int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("\nDisplya after  sorted array :");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	
	return 0;
}
