#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter limit of natural number=");
	scanf("%d",&n);
	do{
		printf("\n%d",i);
	i++;
	}
	while(i<=n);
	printf("\n");
	return 0;
}
