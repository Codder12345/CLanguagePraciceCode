#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j, *ptr;
	int n,i,f,sum=0;
	printf("\nEnter  size of array:");
	scanf("%d",&n);
	ptr=&n;
	ptr=(int*) malloc(n*sizeof(int));  
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",ptr+i);
	 }
	  for(i=0;i<5;i++)
	 {
	 	f=1;
	 	for(j=2;j<=*(ptr+i)/2;j++)
	 	{
	 		if(*(ptr+i)%j==0)
	 		{
	 			f=0;
	 			break;
			 }
		 }
		 if( *(ptr+i)!=1&& f==1)
		 {
		 	printf("%d",*(ptr+i));
		 }
	 
	 }
	 
	 
	 
}
