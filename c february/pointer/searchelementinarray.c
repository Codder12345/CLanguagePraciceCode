#include<stdio.h>
int main()
{
	int a[5],i,*ptr;
	ptr=&a[0];
	printf("\n Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
	}
	int skey,f=0;
	printf("\nEnter search value");
	scanf("%d",&skey);
	for(i=0;i<5;i++)
	{
	  if(*(ptr+i)==skey)
	  {
	  	f=1;
	  	break;
	  }
	}	
	if(f==1)
	{
		printf("value is search by:%d",*(ptr+i));
	}
	else
	{
		printf("\n element not search");
	}
}
