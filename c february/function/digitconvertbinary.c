#include<stdio.h>
int ToBinary(int x)
{
	int i,bin=0;
	for(i=0;i<5;i++)
	{
	    x=x/2;
	bin=bin*10+x;
	printf("%d",x,bin);
	}
	
}
  int main()
{
	int ToBinary(int no);
	int i;
	int no[]={0,0,0,0,0,0,0,0};
	printf("Enter no from array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&no[i]);
		
	}
	ToBinary(no[i]);

	return 0;
}
