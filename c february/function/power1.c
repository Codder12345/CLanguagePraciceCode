#include<stdio.h>
void power(int base,int index)
{
     int p=1,i=1;
	 while(i<=index);
	 {
	 	p=p*base;
	}	
	 printf("power of %d ",p);
		 
}
int main()
{
	void power(int,int);
	int base ,index;
	printf("\n Enter value for base and index from user:");
	scanf("%d%d",&base,&index);
	power(base,index);
	return 0;
} 
