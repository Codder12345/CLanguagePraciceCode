#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,k,j,temp;
	printf("\n Enter array size from users");
	scanf("%d",&n);
	int a[i];
	printf("\n Enter array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		   if(a[i]>=a[j])
		   {
		   	temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		   }
		}
		
	}
	
		for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\n Enter value  from user we wont to finf largest number:");
	scanf("%d",&k);
/*	for(i=0;i<n;i++)
	{
		k=a[2];
		break;

	}
	printf(" largest third valu in aarray :%d",k); 
*/
printf("%d largest number is",a[i-k]);
	return 0;
}
