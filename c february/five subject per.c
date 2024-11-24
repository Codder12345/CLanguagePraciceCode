#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot,per;
	printf("Enter marks of five subject=");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	tot=s1+s2+s3+s4+s5;
	per=tot/5;
	printf("\nTotal marks of five subject=%d",tot);
	printf("\npercentage=%d",per);
	return 0;
}
