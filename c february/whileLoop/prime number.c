#include<stdio.h>
int main()
{
	int limit,i=2,j=2,f=1,count;
	printf("\nEnter  number=");
	scanf("%d",&limit);
	
while(j<=limit)
{
	
count=0;
		while(i<=j/2)
	{
		if(j%i==0)
		{
		  //f=0;
		  //break;
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
	return 0;
}
