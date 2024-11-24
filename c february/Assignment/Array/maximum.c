#include<stdio.h>
int main()
{
	int a[5],i,sum=0,j,max,min;
	printf("\nEnter array element:");
for(i=0;i<5;i++)
{
		scanf("%d",&a[i]);
}
//maximum no in array
max=a[0];
for(i=0;i<5;i++)
{
 if(max<=a[i])
 {
 	max=a[i];
 }
}
//minimum no in array
min=a[0];
for(i=0;i<5;i++)
{
 if(min>a[i])
 {
 	min=a[i];
 }
}
printf("\n maximum number in array is : %d",max);
printf("\n minimum numbe in array is : %d",min);
return 0;
}
