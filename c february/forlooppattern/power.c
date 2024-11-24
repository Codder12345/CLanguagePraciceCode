#include<stdio.h>
int main()
{
	int i,p=1,base,index;
	printf("Enter base and index:");
	scanf("%d%d",&base,&index);
 for(i=1;i<=index;i++)
 {
 	p=p*base;
 }
 printf("%dpower:%d",base,p);
 return 0;
}

