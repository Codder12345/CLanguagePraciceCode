#include<stdio.h>
#include<conio.h>

void  main()
{
	int cube(int);
	int base;
	printf("enter value for cube=");
	scanf("%d",&base);
	 int p=cube(base);
	 printf("%d cube is =%d",base,p);
	getch();
	
}
int cube(int base)
{
	int i;
	int p=1;
	for(i=1;i<=3;i++)
	{
		p=p*base;
	}
	return p;
}
