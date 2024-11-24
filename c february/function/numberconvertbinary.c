#include<stdio.h>
int tobinary(int x)
{

   int a[]={0,0,0,0,0,0,0,0};
	 int bin=0,k=0,i,d;
	d=x;
	while(d>0)
	  {
		a[k++]=d%2;	
		d=d/2;
	}
	for(i=5;i>0;i--)
	{
	  bin=bin*10+a[i];	
	}
	return bin;
}
int main()
{
	int tobinary(int);
	int num[5],i;
	printf("Enter number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
  for(i=0;i<5;i++)
{
	printf7("%d  %d",num[i],tobinary(num[i]));
}
return 0;
}

