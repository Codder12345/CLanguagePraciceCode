#include<stdio.h>
int main()
{
	int table(int);
	int no;
	printf("\nEnter number:");
	scanf("%d",&no);
	table(no);
  return 0;
  
}
 int table(x)
 {
 	int i;
  for(i=1;i<=10;i++)
  {
  	printf("\n%d",x*i);
  }
 }
