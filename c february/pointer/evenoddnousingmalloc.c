#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  *ptr;
	int n,i,f,sum=0;
	printf("\nEnter  size of array:");
	scanf("%d",&n);
	ptr=&n;
	ptr=(int*) malloc(n*sizeof(int));  
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",ptr+i);
	 }
	 printf("\n odd number:");
	  for(i=0;i<n;i++)
	 {
	     f=1;
	     if(*(ptr+i)%2==0)
	     {
	     	f=0;
		 }
		 if(f==1)
		 {
		 	printf("%d",*(ptr+i));
		 }
	 }
	 printf("\n Even number:");
	  for(i=0;i<n;i++)
	 {
	     f=1;
	     if(*(ptr+i)%2==0)
	     {
	     	f=0;
		 }
		 if(f==0)
		 {
		 	printf("%d",*(ptr+i));
		 }
	 }
	 
	 
	 
}
