#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  *ptr;
	int n,i,sum=0;
	printf("\nEnter  size of array:");
	scanf("%d",&n);
	ptr=&n;
	ptr=(int*) malloc(n*sizeof(int));  
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",ptr+i);
	 }
	  for(i=0;i<n;i++)
	 {
	 	sum=sum+*(ptr+i);
	 	
	 }
	 printf("sum:%d",sum);
	 
	 
	 
}
