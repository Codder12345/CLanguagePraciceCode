#include<stdio.h>
#include<conio.h>
int main()
{
	int no ,rem,sum=0,temp;
	printf("\n Enter no=");
	scanf("%d",&no);
	temp=no;
	rem=no%10;
	no=no/10;
	sum=sum+rem*100;
	rem=no%10;
	no=no/10;
	sum=sum+rem*10;
	rem=no%10;
	sum=sum+rem*1;
    (sum==temp)?printf(" \nnumber is palindrom."):printf("\nnumber is not palindrom.");
    
 return 0;
}
