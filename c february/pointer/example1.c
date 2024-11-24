#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a[5],i,s1;
	ptr=&a;
	printf("Enter size");
	scanf("%d",&s1);
	ptr[s1];
	for(i=0;i<s1;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<s1;i++)
	{
		if(ptr[i]%2==0)
		{
			printf("%d",*ptr+i);
		}
		
	}
	printf( " Odd number is \n");
		for(i=0;i<s1;i++)
	{
		if(ptr[i]%2!=0)
		{
			printf("%d",*ptr+i);
		}
		
	}
	return 0;
}
