#include<stdio.h>
#include<conio.h>
int main()
{
	int maxmin(int,int);
	int a,b;
	printf("\n Enter two number:");
	scanf("%d%d",&a,&b);
	 maxmin(a,b);
	 return 0;
	 
}
int maxmin(int a,int b)
{
	int max,min;
	if(a>b)
       {
		printf("\n max%d",a);
		}
		else
		{
			printf("\n max%d",b);
		}
 if(a<b)
 {
 	printf("\n %d min:",a);
	 }	
	 else{
	 	printf("\n %d min",b);
	 }
}
