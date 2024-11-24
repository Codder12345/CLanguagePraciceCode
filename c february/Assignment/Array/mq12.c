#include<stdio.h>
int main(){
	int i;
int a[5]={10,20,30,40,50};
int *ptr;
ptr=a;
ptr++;
*ptr=500;
for( i=0;i<5;i++){
printf("%d\n",a[i]);
}
return 0;
}

