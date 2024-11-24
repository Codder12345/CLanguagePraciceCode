#include<stdio.h>
int main(){
int j=1;
int a[5]={5,4,3,5,2};
int d=a[4];
int e=a[d]+10;
int f=a[d+2];
printf("D=%d\tE=%d\tF=%d\n",d,e,f);
return 0;
}
