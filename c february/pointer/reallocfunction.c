#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,size,nplate,osplate,rmanp,eplate,emanp;
	printf("Enter number of plate");
	scanf("%d",&nplate);
	rmanp=nplate/10;
	ptr=(int*)malloc(sizeof(int)*rmanp);
	printf("Enter code of employee\n");
	for(i=0;i<rmanp;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n Enter on spot plate");
	scanf("%d",&osplate);
	if(osplate>nplate){
		eplate=osplate-nplate;
		 emanp=eplate/10;
		ptr=(int*)realloc(ptr,sizeof(int)*emanp);
		printf("\n Enter code of new employee\n");
		for(i=rmanp;i<(rmanp+emanp);i++)
		{
			scanf("%d",&ptr[i]);
		}
		printf("\n Display all employee\n");
		for(i=0;i<(rmanp+emanp);i++)
		{
			printf("%d\t",ptr[i]);
		}
	}
		
	return 0;
}
