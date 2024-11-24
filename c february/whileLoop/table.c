#include<stdio.h>
int main()
{
	int no,tab,i=1;
	printf("Enter no=");
	scanf("%d",&no);
	while(i<=10)
	{
		tab=no*i;
		printf("\n%d",tab);
		i++;
	}
}
