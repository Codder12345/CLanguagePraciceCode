#include<stdio.h>
#include<conio.h>
int main()
{
	int arm,no,rem,c,sum=0;
	printf("Enter number=");
	 scanf("%d",&no);

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
       printf("%d",sum);
     (sum==c)?printf("arm"):printf("not");

	 return 0;
	
	
}
