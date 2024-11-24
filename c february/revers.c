#include<stdio.h>
#include<conio.h>
int main()
{
	int no ,rev,rem,sum=0;
	printf("\n Enter no=");
	scanf("%d",&no);
	
	rem=no%10;
	no=no/10;
	sum=sum+rem*100;
	rem=no%10;
	no=no/10;
	sum=sum+rem*10;
	rem=no%10;
	sum=sum+rem*1;
	printf("revers no=%d",sum);

 return 0;
}
