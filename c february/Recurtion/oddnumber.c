#include<stdio.h>
void evennumber(int);
void oddnumber(int);
int main()
{
	int limit;
	printf("\n Enter limit");
	scanf("%d",&limit);
	printf("\n Even number is:");
	evennumber(limit);
	printf("\noddnumber is:");
	oddnumber(limit);
	return 0;
}
void evennumber(int limit)
{
	
	static int i=1;
	if(limit!=0)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
		evennumber(limit-1);
	}
}
void oddnumber(int limit)
{
	
	static int i=1;
	if(limit!=0)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
		i++;
		oddnumber(limit-1);
	}
}
