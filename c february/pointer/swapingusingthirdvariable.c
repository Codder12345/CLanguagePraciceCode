#include<stdio.h>
int main()
{
	int a=100,b=200,*ptr1,*ptr2,ptr3;
	ptr1=&a;
	ptr2=&b;
    printf("\n After swapping a:%d  b:%d\n",a,b);
	ptr3=*ptr1;
	*ptr1=*ptr2;
	*ptr2=ptr3;
	printf("  \nBefore swaping a:%d  b: %d\n",*ptr1,*ptr2);
	return 0;
}
