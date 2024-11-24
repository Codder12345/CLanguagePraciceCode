#include<stdio.h>
int main()
{
	int i=2,j=2,limit,count;
	printf("\nEnter  number=");
	scanf("%d",&limit);
	
    while(j<=limit)
   {
	
    count=0;
		while(i<=j/2)
	{
		if(j%i==0)
		{
		  count++;
		}
		i++;
	}
	if(count==0)
	{
		printf("\n%d",j);
	
	}
	j++;

   } 
}
