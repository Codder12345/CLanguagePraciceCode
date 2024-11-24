#include<stdio.h>
#include<conio.h>
void main()
{
	void *test(int*);
	int i;
	int a[]={10,20,30,40,50};
	 *ptr=test(a);
	printf("Display array:");
	for(i=0;i<5;i++)
	{
		*ptr+=10;
	}
	*a=*a+*ptr;
	printf("Display array:")
		for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
void *test(int *ptr)
{
	int i;
	for(i=0;i<5;i++)
	{
		*ptr=*ptr+10;
		ptr++;
	}
}
