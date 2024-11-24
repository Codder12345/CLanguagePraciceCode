#include<stdio.h>
int main()
{
	int no,i=1;
	printf("\n Enter number =");
	scanf("%d",&no);
	while(i<=no)
	{
		if(no%i==0)
		{
    	   printf("\t%d",i);

		}
		i++;
	}


	return 0;
}
