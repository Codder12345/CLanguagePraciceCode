#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *ptr,size,i;
	printf("Enter array size ");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);//2*10=20
	printf("Enter values in array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n display array value\n");
	for(i=0;i<size;i++)
	{
		printf(" %u-->%d",i,ptr[i]);
	}
	return 0;
}
