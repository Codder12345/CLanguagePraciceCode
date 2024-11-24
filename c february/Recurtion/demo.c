#include<stdio.h>
int naturalnumber(int x);

int main()
{
int naturalnumber(int x);
 int no,i;
 printf("Enter number");
 scanf("%d",&no);
 naturalnumber(no);


return 0;
}
int naturalnumber(int no)
{
 static int f=1;
	if(no!=0)
	{
	naturalnumber(no-1);
	printf("%d",f);	
	f++;
	}
}

