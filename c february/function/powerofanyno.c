#include<stdio.h>
#include<conio.h>
int p;
void  main()
{
	int cube(int,int);
	int base,index;
	printf("enter base and index value=");
	scanf("%d%d",&base,&index);
	 int p=cube(base,index);
	 printf("%d cube is =%d",base,p);
	getch();
	
}
int cube(int base,int index)
{
	int i;
	p=1;
	for(i=1;i<=index;i++)
	{
		p=p*base;
	}
	return p;
}
