#include<stdio.h>
int main()
{
	int n,rem,count=0;
	printf("\nEnter of any digit=");
	scanf("%d",&n);
		while(n!=0)
		{
			++count;
			rem=n%10;
			n=n/10;
          
		}	
	printf("count :%d",count);
	return 0;
}
