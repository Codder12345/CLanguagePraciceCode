#include<stdio.h>
int main()
{
	int i;
int a[5]={10,20,30,40,50};
int *ptr;
ptr=a;
for(i=0; i<5;i++){
*ptr=*ptr+10;
printf("%d\n",a[i]);
ptr++;
}
return 0;
}

