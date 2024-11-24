#include<stdio.h>
int main(){
	int i,j,p=1;
	for(i=1;i<=5;i++)
	{
		int num=i;
		for(j=1;j<=9;j++)
		{
		if(j>=6-i&&j<=4+i)
		{
	     	printf("%d",num);
	     	
			}	
			else
			{
			printf(" ");
			}
		}
		printf("\n");
	}
}
