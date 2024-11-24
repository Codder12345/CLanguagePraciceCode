#include<stdio.h>
#include<math.h>
int main()
{
	int no,sum=0,rem;
	printf("enter no");
	scanf("%d",&no);
	rem=no%10;
	sum=sum*10+rem;
	no=no/10;
	rem=no%10;
	sum=sum*10+rem;
	no=no/10;
	rem=no%10;
	sum=sum*10+rem;
	no=no/10;
	printf("%d",sum);
}
