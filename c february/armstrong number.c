#include<stdio.h>
#include<conio.h>
int main()
{
	int arm,no,rem,c,sum=0;
	printf("Enter number=");
	scanf("%d",&no);
	no=c;
       rem=no%10;
       arm=rem*3;
       sum=sum+arm;
       no=no/10;
       rem=no%10;
       arm=rem*3;
       sum=sum+arm;
       no=no/10;
       rem=no%10;
       arm=rem*3;
       sum=sum+arm; 
       printf("%d",sum);

	 return 0;
	
	
}
