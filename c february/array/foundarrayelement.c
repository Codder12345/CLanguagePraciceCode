#include<stdio.h>
int main()
{
	int a[5],i,skey,f;
	printf("Enter array element=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter search element");
	scanf("%d",&skey);
	for(i=0;i<4;i++)
	{
		f=0;
	     if(a[i]==skey)
	     {
	     	f=1;
	     	break;
		 }
	}
	if(f==1)
	{
		printf(" array element is found.");
	}
	else
	{
		printf("array element is not found.");
	}
	return 0;
}
