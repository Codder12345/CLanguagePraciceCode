#include<stdio.h>
#include<math.h>
int main()
{ 
   void toDecimal(int *,int);
   int size;
   printf("\nEnter size:\n");
   scanf("%d",&size);
   printf("\nEnter values:\n");
   int a[size],i;
   for(i=0;i<size;i++)
     scanf("%d",&a[i]);
    toDecimal(a,size);
}
void toDecimal(int *ptr,int x)
{  
  for(int j=0;j<x;j++)
	{
	int n=*ptr,i=0,a=0,d;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		a=a+d*pow(2,i);
		i++;
	}
	printf("%d",a);
	printf("\t");
	ptr++;
 }
}
