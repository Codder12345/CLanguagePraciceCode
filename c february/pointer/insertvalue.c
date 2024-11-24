#include<stdio.h>

int main()
{
	int a[6],i,index,value,*ptr;
	ptr=&a[0];
	printf("Enter array element");
	for(i=0;i<6;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<6;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("\n Enter value from store  in array:");
	scanf("%d",&value);
	printf("\nEnter index");
	scanf("%d",&index);
	for(i=6;i>0;i++)
	{
		a[i+1]=a[i];
	}
	 ptr[index]=value;
	for(i=0;i<6;i++)
	{
		printf("\t %d",*(ptr+i));
	}
	return 0;
	
}

