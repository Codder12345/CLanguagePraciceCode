#include<stdio.h>
int main(){
int a[]={10,20,30,40,50};
int *ptr;
ptr=a;
ptr=ptr+2;
int *ptr1;
ptr1=ptr;
printf("%d\n",*ptr1);
return 0;
}

