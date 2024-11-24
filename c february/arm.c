#include<stdio.h>
#include<conio.h>
int main()
{
	int arm,no,rem,c,sum=0;
	printf("Enter number=");
	 scanf("%d",&no);
       c=no;
       rem=no%10;
       arm=rem*rem*rem;
       sum=sum+arm;
       no=no/10;
       rem=no%10;
       arm=rem*rem*rem;
       sum=sum+arm;
       no=no/10;
       rem=no%10;
       arm=rem*rem*rem;
       sum=sum+arm; 
      sum==c?printf("Armstrong number: %d",sum):printf("not armstrong number:%d",sum);

	 return 0;
	
	
}
