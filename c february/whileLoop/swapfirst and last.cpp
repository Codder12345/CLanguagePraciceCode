#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   long	int no,last,first,p,p1,count=0,temp;
	printf("\n Enter number\n");
	scanf("%d",&no);
temp=no;
while(no!=0)
{
	++count;
	no=no/10;
	
}
no=temp;
last=no%10;
p=pow(10,--count);
first=no/p;
no=no%10;
p1=pow(10,--count);
no=no/p1;
last=last*p;
no=no*10;
no=last+no+first;
printf("\n after swaapping %d\n",no);
getch();
}
