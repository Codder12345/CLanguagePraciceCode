#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int k,i,*ptr,*ptr1,*ptr2,n,m;
	ptr=&n;
	ptr1=&m;
	ptr=(int*) malloc(n*sizeof(int));
	printf("\nEnter  size of array:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
	{
		scanf("\n%d",(ptr+i));
		
}
    printf("\nDisplay array:");
		for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
	
	}
		ptr=(int*) malloc(m*sizeof(int));
			printf("\nEnter  size of array:");
         	scanf("%d",&m);
		for(i=0;i<m;i++)
	{
		scanf("\n%d",(ptr1+i));
	
	}
		printf("\nDisplay array:");
		for(i=0;i<m;i++)
	{
		printf("\n%d",*(ptr1+i));
		
}
	k=0;
	for(i=0;i<k;i++)
	{
		*(ptr2+k)=*(ptr+i);
		k++;
	}
	for(i=0;i<5;i++)
	{
		*(ptr2+k)=*(ptr1+i);
		k++;
	}
		printf("\n merge array:");
	for(i=0;i<k;i++)
	{
		printf("\t%d",*(ptr2+i));
		
	}
}




