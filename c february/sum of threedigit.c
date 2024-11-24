#include<stdio.h>
#include<conio.h>
int main()
{
	int no,sum=0,rem;
	printf("Enter no=");
    scanf("%d",&no);
    rem=no%10;
    sum=sum+rem;
    no=no/10;
    rem=no%10;
    sum=sum+rem;
    no=no/10;
    rem=no%10;
    sum=sum+rem;
    no=no/10;
    
    printf("%d",sum);
    return 0;
}
