#include<stdio.h>
int main()
{
	int rev(int);//declaration
	int no;
	printf("\n Enter number:");
	scanf("%d",&no);
	 int revno=rev(no);//calling function
	 if(revno==no)
	 {
	 	printf("\npalindrom number.");
}
else
{
	printf("\nnot palindrom");
}
	return 0;
}
int rev(no)//initialization
{
	int rem,revno,i;
	while(no!=0)
	{
		rem=no%10;
       revno=revno*10+rem;
       no=no/10;
	}
	printf("\nREVERS OF NO:-%d",revno);
	return revno;
}
