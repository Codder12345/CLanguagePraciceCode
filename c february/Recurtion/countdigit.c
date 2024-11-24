#include<stdio.h>
#include<conio.h>
int count=0;
int main()
{
	int countdigit(int);
	int no;
	printf("\n Enter number:");
	scanf("%d",&no);
    countdigit(no);
    
	
}
int countdigit(int x)
{
	
  if(x!=0)
  {
   x=x/10;
    count++;
  }
  	printf("%d",count);
  return count;
}
