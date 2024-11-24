#include<stdio.h>
int main()
{
	int i;
int a[5]={10,20,30,40,50};
int *ptr,*ptr1;
ptr=a;
ptr1=ptr;
*ptr1=100;
ptr=ptr+2;
*ptr=600;
ptr1=ptr1+2;
*ptr1=700;
printf("display the array values\n");
for( i=0; i<5; i++){
printf("%d\n",a[i]);
}
return 0;
}
