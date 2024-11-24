#include<stdio.h>
int main()
{
	int i=1,j,limit,count;
	printf("Enter limit");
	scanf("%d",&limit);
	 while(i<=limit)
	 {
	    count=0;
	 	for(j=1;j<=i;j++)
	 	{
	 		 if(i%j==0)
	 		 {
	 		 	count++;
	 		 }
	 		 
	 	}
	 	if(count==2)
	 	{
	 		printf("%d",i);
	 	}
	 	i++;
	 }	
	 return 0;
}
