#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int k,size,size1,i,*ptr,*ptr1,*ptr2;
	printf("\nEnter size array element :");
	scanf("%d",&size);
	 ptr=(int*)malloc(sizeof(int)*size);
		for(i=0;i<size;i++)
	{
		scanf("\n%d",(ptr+i));
		
}
    printf("\nDisplay array:");
		for(i=0;i<size;i++)
	{
		printf("\n%d",*(ptr+i));
	
	}
		printf("\nEnter size array element :");
	scanf("%d",&size1);
	ptr1=(int*)malloc(sizeof(int)*size1);
		for(i=0;i<size1;i++)
	{
		scanf("\n%d",(ptr1+i));
	
	}
		printf("\nDisplay array:");
		for(i=0;i<size1;i++)
	{
		printf("\n%d",*(ptr1+i));
		
	}
	k=0;
	int size2=size+size1;
	ptr2=(int*)malloc(sizeof(int)*size2);
		printf("\n union array:");
	for(i=0;i<size;i++)
	{
		*(ptr2+k)=*(ptr+i);
		k++;
	}
	for(i=0;i<size1;i++)
	{
		*(ptr2+k)=*(ptr1+i);
		k++;
	}
	   
	for(i=0;i<size2;i++)
	{
		if(*(ptr2+i)==*(ptr1+i))
		{
			printf("\t%d",*(ptr2+i));
		}
		
	}
}




