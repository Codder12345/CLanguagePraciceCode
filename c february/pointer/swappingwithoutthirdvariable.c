#include<stdio.h>
int main()
{
	int a=100,b=200,*ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	printf("\n After swaping a:%d  b:%d",a,b);
	*ptr1=(*ptr1)+(*ptr2);
	*ptr2=(*ptr1)-(*ptr2);
	*ptr1=(*ptr1)-(*ptr2);
    printf("\n Before swapping a:%d  b:%d\n",*ptr1,*ptr2);
	
}
