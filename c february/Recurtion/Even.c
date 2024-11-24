#include<stdio.h>
int  Even(int x);
int main()
{
	int no;
	printf("Enter number=");
	scanf("%d",&no);
	 int result=Even(no);
	if(result){
		printf("Even");
	}
	else{
		printf("odd");
	}
	return 0;
	
}
int Even(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	else{
		return 0;
	}
	Even(x);
}
