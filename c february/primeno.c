#include<stdio.h>
int main()
{
	int no,i=1,count=0;
	printf("Enter number:");
	scanf("%d",&no);
	
	while(i<=no){
	if(no%i==0)
	{
		count++;
	}
	i++;
	
	}
	if(count==2)
	{
		printf("no is prime:");
	}
	else{
		printf("not prime");
	}
	return 0;
}
