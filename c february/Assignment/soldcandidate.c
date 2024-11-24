#include<stdio.h>
int main()
{
	int n=10,k=5,m;
	printf("Enter value of m=");
	scanf("%d",&m);
	if(m<k&& m<n )
	{
		printf("\ncandidate sold%d",m);
		printf("\ncandidate available %d",n-m);
		
	}
	else
	{
		printf("Invalid.");
		
	}
return 0;	
}
