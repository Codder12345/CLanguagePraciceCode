#include<stdio.h>
#include<conio.h>
void naturalnumber(int);
int main()
{
int no;
printf("\n Enter number from user:");
scanf("%d",&no);
naturalnumber(no);
return 0;
}
void naturalnumber(int no)
{
	int f=0;
   	f=naturalnumber(no-1);
   	printf("%d",f);
}
