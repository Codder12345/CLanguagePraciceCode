#include<stdio.h>
int main(){
	int i;
int a[5]={10,20,30,40,50};
for( i=0; i<5; i++){
printf("%d\t%u\n",*(a+i),(i+a));
}
return 0;
}

